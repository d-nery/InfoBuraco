#include <msclr/marshal_cppstd.h>
#include <vector>

#include "BuracoDAO.h"
#include "MySQL.h"

namespace InfoBuraco {
    BuracoDAO::BuracoDAO() {}

    Buraco* BuracoDAO::getBuraco(int id) {
        Buraco* buraco = nullptr;

        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;
        sql::ResultSet* resultSet;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT * FROM buraco where id_buraco = ?;");
            pstmt->setInt(1, id);

            resultSet = pstmt->executeQuery();
            if (resultSet->next()) {
                buraco = new Buraco;
                buraco->id_buraco = resultSet->getInt("id_buraco");
                buraco->localizacao = resultSet->getString("localizacao").c_str();
                buraco->regional = resultSet->getString("regional").c_str();
                buraco->tamanho = resultSet->getInt("tamanho");
                buraco->posicao = resultSet->getInt("posicao");
                buraco->n_reclamacoes = resultSet->getInt("n_reclamacoes");
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }

        return buraco;
    }

    Buraco* BuracoDAO::getBuraco(std::string localizacao, std::string regional) {
        Buraco* buraco = nullptr;

        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;
        sql::ResultSet* resultSet;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT * FROM buraco where localizacao = ? and regional = ?;");
            pstmt->setString(1, localizacao.data());
            pstmt->setString(2, regional.data());

            resultSet = pstmt->executeQuery();
            if (resultSet->next()) {
                buraco = new Buraco;
                buraco->id_buraco = resultSet->getInt("id_buraco");
                buraco->localizacao = resultSet->getString("localizacao").c_str();
                buraco->regional = resultSet->getString("regional").c_str();
                buraco->tamanho = resultSet->getInt("tamanho");
                buraco->posicao = resultSet->getInt("posicao");
                buraco->n_reclamacoes = resultSet->getInt("n_reclamacoes");
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }

        return buraco;
    }

    int BuracoDAO::insertBuraco(Buraco* buraco) {
        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("INSERT INTO buraco VALUES ( null , ? , ? , ? , ? , ? );");

            pstmt->setString(1, buraco->localizacao.data());
            pstmt->setInt(2, buraco->tamanho);
            pstmt->setString(3, buraco->regional.data());
            pstmt->setInt(4, buraco->tamanho);
            pstmt->setInt(5, buraco->n_reclamacoes);

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

    void BuracoDAO::updateBuraco(Buraco* buraco) {
        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("UPDATE buraco SET `localizacao` = ?, `tamanho` = ?, `regional`= ?, `posicao` = ?, `n_reclamacoes` = ? WHERE `id_buraco` = ?;");

            pstmt->setString(1, buraco->localizacao.data());
            pstmt->setInt(2, buraco->tamanho);
            pstmt->setString(3, buraco->regional.data());
            pstmt->setInt(4, buraco->posicao);
            pstmt->setInt(5, buraco->n_reclamacoes);
            pstmt->setInt(6, buraco->id_buraco);

            int ret = pstmt->executeUpdate();
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }
    }

    int BuracoDAO::getLastId() {
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

    BuracoDAO::~BuracoDAO() {}
}
