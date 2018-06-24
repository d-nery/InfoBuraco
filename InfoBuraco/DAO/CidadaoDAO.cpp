#include <msclr/marshal_cppstd.h>
#include <vector>

#include "CidadaoDAO.h"
#include "MySQL.h"

namespace InfoBuraco {
    CidadaoDAO::CidadaoDAO() {}

    Cidadao* CidadaoDAO::getCitizen(std::string name) {
        Cidadao* citizen = nullptr;

        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;
        sql::ResultSet* resultSet;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT nome, telefone, email FROM lala2_cidadao where nome = ?");
            pstmt->setString(1, name.data());

            resultSet = pstmt->executeQuery();
            if (resultSet->next()) {
                citizen = new Cidadao;
                citizen->setNome(resultSet->getString(1).c_str());
                citizen->setTelefone(resultSet->getString(2).c_str());
                citizen->setEmail(resultSet->getString(3).c_str());
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }

        return citizen;
    }

    std::vector<Cidadao*>* CidadaoDAO::getAll() {
        std::vector<Cidadao*>* ret = new std::vector<Cidadao*>;

        sql::Connection* conn = nullptr;
        sql::ResultSet* resultSet;
        sql::PreparedStatement* pstmt;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT nome, telefone, email, facebook FROM lala2_cidadao");

            resultSet = pstmt->executeQuery();
            while (resultSet->next()) {
                Cidadao* citizen = new Cidadao;
                citizen->setNome(resultSet->getString("nome").c_str());
                citizen->setTelefone(resultSet->getString("telefone").c_str());
                citizen->setEmail(resultSet->getString("email").c_str());
                citizen->setFacebook(resultSet->getString("facebook").c_str());

                ret->push_back(citizen);
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }

        return ret;
    }

    void CidadaoDAO::insertCidadao(Cidadao* cidadao) {
        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("INSERT INTO lala2_cidadao (`nome`, `telefone`, `email`) VALUES ( ? , ? , ? );");
            pstmt->setString(1, cidadao->getNome().data());
            pstmt->setString(2, cidadao->getTelefone().data());
            pstmt->setString(3, cidadao->getEmail().data());

            int ret = pstmt->executeUpdate();
            if (ret == 1) {
                System::Windows::Forms::MessageBox::Show("Cidadao Criado");
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }
    }

    CidadaoDAO::~CidadaoDAO() {}
}
