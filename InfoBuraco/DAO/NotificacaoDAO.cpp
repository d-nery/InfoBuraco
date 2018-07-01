#include <msclr/marshal_cppstd.h>
#include <boost/date_time.hpp>

#include "MySQL.h"
#include "NotificacaoDAO.h"
#include "UsuarioDAO.h"
#include "CidadaoDAO.h"
#include "BuracoDAO.h"

namespace InfoBuraco {
    NotificacaoDAO::NotificacaoDAO() {}

    Notificacao* NotificacaoDAO::getNotificacao(int id) {
        Notificacao* notificacao = nullptr;

        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;
        sql::ResultSet* resultSet;

        int temp_int;
        std::string temp_str;

        CidadaoDAO cidadaoDAO;
        NotificacaoDAO notificacaoDAO;
        UsuarioDAO usuarioDAO;
        BuracoDAO buracoDAO;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT * FROM notificacao WHERE id_notificacao = ?");
            pstmt->setInt(1, id);

            resultSet = pstmt->executeQuery();
            if (resultSet->next()) {
                notificacao = new Notificacao;
                notificacao->id_notificacao = resultSet->getInt("id_notificacao");
                notificacao->data_notificacao = boost::posix_time::time_from_string(resultSet->getString("data_notificacao").c_str());
                notificacao->data_resposta = boost::posix_time::time_from_string(resultSet->getString("data_resposta").c_str());
                notificacao->resposta = resultSet->getString("resposta").c_str();

                temp_str = resultSet->getString("cidadao_id").c_str();
                notificacao->cidadao = cidadaoDAO.getCitizen(temp_str);

                temp_int = resultSet->getInt("buraco_id");
                notificacao->buraco = buracoDAO.getBuraco(temp_int);

                temp_str = resultSet->getString("usuario_registro_id").c_str();
                notificacao->usuario_registro = usuarioDAO.getUser(temp_str);

                temp_str = resultSet->getString("usuario_resposta_id").c_str();
                if (resultSet->wasNull())
                    notificacao->usuario_resposta = nullptr;
                else
                    notificacao->usuario_resposta = usuarioDAO.getUser(temp_str);
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }

        return notificacao;
    }

    std::vector<Notificacao*>* NotificacaoDAO::getAll() {
        std::vector<Notificacao*>* ret = new std::vector<Notificacao*>;

        sql::Connection* conn = nullptr;
        sql::ResultSet* resultSet;
        sql::PreparedStatement* pstmt;

        int temp_int;
        std::string temp_str;

        CidadaoDAO cidadaoDAO;
        NotificacaoDAO notificacaoDAO;
        UsuarioDAO usuarioDAO;
        BuracoDAO buracoDAO;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT * FROM notificacao LIMIT 100;");

            resultSet = pstmt->executeQuery();
            while (resultSet->next()) {
                Notificacao* notificacao = new Notificacao;

                notificacao->id_notificacao = resultSet->getInt("id_notificacao");
                notificacao->data_notificacao = boost::posix_time::time_from_string(resultSet->getString("data_notificacao").c_str());
                
                temp_str = resultSet->getString("data_resposta").c_str();
                if (!resultSet->wasNull())
                    notificacao->data_resposta = boost::posix_time::time_from_string(temp_str);
                
                notificacao->resposta = resultSet->getString("resposta").c_str();

                temp_str = resultSet->getString("cidadao_id").c_str();
                notificacao->cidadao = cidadaoDAO.getCitizen(temp_str);

                temp_int = resultSet->getInt("buraco_id");
                notificacao->buraco = buracoDAO.getBuraco(temp_int);

                temp_str = resultSet->getString("usuario_registro_id").c_str();
                notificacao->usuario_registro = usuarioDAO.getUser(temp_str);

                temp_str = resultSet->getString("usuario_resposta_id").c_str();
                if (resultSet->wasNull())
                    notificacao->usuario_resposta = nullptr;
                else
                    notificacao->usuario_resposta = usuarioDAO.getUser(temp_str);

                ret->push_back(notificacao);
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }

        return ret;
    }

    int NotificacaoDAO::insertNotificacao(Notificacao* notificacao) {
        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("INSERT INTO notificacao VALUES (null, ?, null, ?, null, ?, ?, ?, null);");
            pstmt->setString(1, boost::posix_time::to_iso_extended_string(notificacao->data_notificacao).data());
            pstmt->setString(2, notificacao->reclamacao.data());
            pstmt->setString(3, notificacao->cidadao->getEmail().data());
            pstmt->setInt(4, notificacao->buraco->getId());
            pstmt->setString(5, notificacao->usuario_registro->getLogin().data());

            int ret = pstmt->executeUpdate();
            if (ret == 1) {
                return this->getLastId();
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
            return -1;
        }

        return -1;
    }

    int NotificacaoDAO::getLastId() {
        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;
        sql::ResultSet* resultSet;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT @@identity AS id;");

            resultSet = pstmt->executeQuery();
            if (resultSet->next()) {
                return resultSet->getInt("id");
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
            return -1;
        }

        return -1;
    }

    NotificacaoDAO::~NotificacaoDAO() {}
}
