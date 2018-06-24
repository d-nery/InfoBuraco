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
            pstmt = conn->prepareStatement("SELECT * FROM lala2_buraco where id_buraco = ?;");
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

    int BuracoDAO::insertBuraco(Buraco* buraco) {
        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;
        sql::ResultSet* resultSet;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("INSERT INTO lala2_buraco VALUES ( null , ? , ? , ? , ? , ? ); SELECT @@identity AS id;");

            pstmt->setString(1, buraco->getLocalizacao().data());
            pstmt->setInt(2, buraco->getTamanho());
            pstmt->setString(3, buraco->getRegional().data());
            pstmt->setInt(4, buraco->getTamanho());
            pstmt->setInt(5, buraco->getNumeroReclamacoes());

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
