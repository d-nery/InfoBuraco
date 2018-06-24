#include <msclr/marshal_cppstd.h>
#include <boost/date_time.hpp>

#include "MySQL.h"
#include "NotificacaoDAO.h"

namespace InfoBuraco {
    NotificacaoDAO::NotificacaoDAO() {
    }

    Notificacao* NotificacaoDAO::getNotificacao(int id) {
        Notificacao* notificacao = nullptr;

        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;
        sql::ResultSet* resultSet;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT * FROM lala2_notificacao WHERE id_notificacao = ?");
            pstmt->setInt(1, id);

            resultSet = pstmt->executeQuery();
            if (resultSet->next()) {
                notificacao = new Notificacao;
                notificacao->id_notificacao = resultSet->getInt("id_notificacao");
                notificacao->data_notificacao = boost::posix_time::time_from_string(resultSet->getString("data_notificacao").c_str());
                notificacao->data_resposta = boost::posix_time::time_from_string(resultSet->getString("data_resposta").c_str());
                notificacao->resposta = resultSet->getString("resposta").c_str();
                notificacao->cidadao_id = resultSet->getString("cidadao_id").c_str();
                notificacao->buraco_id = resultSet->getInt("buraco_id");
                notificacao->usuario_registro_id = resultSet->getString("usuario_registro_id").c_str();
                notificacao->usuario_resposta_id = resultSet->getString("usuario_resposta_id").c_str();
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }

        return notificacao;
    }

    NotificacaoDAO::~NotificacaoDAO() {
    }
}
