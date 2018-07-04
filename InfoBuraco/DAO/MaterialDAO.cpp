#include <msclr/marshal_cppstd.h>

#include "MaterialDAO.h"
#include "MySQL.h"

namespace InfoBuraco {
    MaterialDAO::MaterialDAO() {}

    Material* MaterialDAO::getMaterial(std::string name) {
        Material* mat = nullptr;

        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;
        sql::ResultSet* resultSet;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT nome FROM material where nome = ?");
            pstmt->setString(1, name.data());

            resultSet = pstmt->executeQuery();
            if (resultSet->next()) {
                mat = new Material;
                mat->nome = resultSet->getString("nome").c_str();
                mat->unidade = resultSet->getString("unidade").c_str();
                mat->custo = resultSet->getDouble("custo");
                mat->quantidade = resultSet->getInt("quantidade");
            }
        }
        catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }

        return mat;
    }

    std::vector<Material*>* MaterialDAO::getAll() {
        std::vector<Material*>* ret = new std::vector<Material*>;

        sql::Connection* conn = nullptr;
        sql::ResultSet* resultSet;
        sql::PreparedStatement* pstmt;

        int temp_int;
        std::string temp_str;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT * FROM material LIMIT 100;");

            resultSet = pstmt->executeQuery();
            while (resultSet->next()) {
                Material* material = new Material;

                material->nome = resultSet->getString("nome").c_str();
                material->unidade = resultSet->getString("unidade").c_str();
                material->custo = resultSet->getDouble("custo");
                material->quantidade = resultSet->getInt("quantidade");

                ret->push_back(material);
            }
        }
        catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }

        return ret;
    }

    void MaterialDAO::insertMaterial(Material* material) {
        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("INSERT INTO material VALUES (?, ?, ?, ?);");
            pstmt->setString(1, material->nome.c_str());
            pstmt->setString(2, material->unidade.c_str());
            pstmt->setDouble(3, material->custo);
            pstmt->setInt(4, material->quantidade);

            pstmt->executeUpdate();
        }
        catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }
    }

    MaterialDAO::~MaterialDAO() {}
}
