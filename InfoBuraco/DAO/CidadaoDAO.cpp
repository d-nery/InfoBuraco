#include <msclr/marshal_cppstd.h>
#include <vector>

#include "CidadaoDAO.h"
#include "MySQL.h"

namespace InfoBuraco {
    CidadaoDAO::CidadaoDAO() {}

    Cidadao* CidadaoDAO::getCitizen(std::string email) {
        Cidadao* citizen = nullptr;

        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;
        sql::ResultSet* resultSet;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT * FROM cidadao where email = ?");
            pstmt->setString(1, email.data());

            resultSet = pstmt->executeQuery();
            if (resultSet->next()) {
                citizen = new Cidadao;
                citizen->nome = resultSet->getString("nome").c_str();
                citizen->telefone = resultSet->getString("telefone").c_str();
                citizen->email = resultSet->getString("email").c_str();
                citizen->facebook = resultSet->getString("facebook").c_str();
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }

        return citizen;
    }

    void CidadaoDAO::insertCidadao(Cidadao* cidadao) {
        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("INSERT INTO cidadao (`nome`, `telefone`, `email`) VALUES ( ? , ? , ? );");
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

    void CidadaoDAO::updateCidadao(Cidadao* cidadao) {
        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("UPDATE cidadao SET `nome` = ?, `telefone`= ?, `facebook` = ? WHERE `email` = ?;");

            pstmt->setString(1, cidadao->nome.data());
            pstmt->setString(2, cidadao->telefone.data());
            pstmt->setString(3, cidadao->facebook.data());
            pstmt->setString(4, cidadao->email.data());

            int ret = pstmt->executeUpdate();
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }
    }

    CidadaoDAO::~CidadaoDAO() {}
}
