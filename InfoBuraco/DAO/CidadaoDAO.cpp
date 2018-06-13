#include "CidadaoDAO.h"
#include "MySQL.h"

namespace InfoBuraco {
    CidadaoDAO::CidadaoDAO() {}

    Cidadao* CidadaoDAO::getCitizen(std::string name) {
        std::string log;
        Cidadao* citizen = nullptr;

        sql::Connection* conn;
        sql::PreparedStatement* pstmt;
        sql::ResultSet* resultSet;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT nome, telefone, email FROM Cidadao where nome = ?");
            pstmt->setString(1, name.data());

            resultSet = pstmt->executeQuery();
            if (resultSet->next()) {
                citizen = new Cidadao;
                citizen->setNome(resultSet->getString(1).c_str());
                citizen->setTelefone(resultSet->getString(2).c_str());
                citizen->setEmail(resultSet->getString(3).c_str());
            }
        } catch (sql::SQLException& e) {
            conn->close();
            log = e.what();
        }

        return citizen;
    }

    void CidadaoDAO::insertCidadao(Cidadao* cidadao) {
        std::string log;

        sql::Connection* conn;
        sql::PreparedStatement* pstmt;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("INSERT INTO Cidadao (`nome`, `telefone`, `email`) VALUES ( ? , ? , ? );");
            pstmt->setString(1, cidadao->getNome().data());
            pstmt->setString(2, cidadao->getTelefone().data());
            pstmt->setString(3, cidadao->getEmail().data());

            int ret = pstmt->executeUpdate();
            if (ret == 1) {
                System::Windows::Forms::MessageBox::Show("Cidadao Criado");
            }
        } catch (sql::SQLException& e) {
            conn->close();
            log = e.what();
        }
    }

    CidadaoDAO::~CidadaoDAO() {}
}