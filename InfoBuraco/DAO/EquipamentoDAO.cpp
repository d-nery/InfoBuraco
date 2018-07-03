#include <msclr/marshal_cppstd.h>

#include "EquipamentoDAO.h"
#include "MySQL.h"

namespace InfoBuraco {
    EquipamentoDAO::EquipamentoDAO() {}

    Equipamento* EquipamentoDAO::getEquipamento(std::string name) {
        Equipamento* equip = nullptr;

        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;
        sql::ResultSet* resultSet;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT nome FROM equipamento where nome = ?");
            pstmt->setString(1, name.data());

            resultSet = pstmt->executeQuery();
            if (resultSet->next()) {
                equip = new Equipamento;
                equip->nome = resultSet->getString("nome").c_str();
                equip->custo_hora = resultSet->getDouble("custo");
                //equip->despacho = nullptr;
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }

        return equip;
    }

    std::vector<Equipamento*>* EquipamentoDAO::getAll() {
        std::vector<Equipamento*>* ret = new std::vector<Equipamento*>;

        sql::Connection* conn = nullptr;
        sql::ResultSet* resultSet;
        sql::PreparedStatement* pstmt;

        int temp_int;
        std::string temp_str;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT * FROM equipamento LIMIT 100;");

            resultSet = pstmt->executeQuery();
            while (resultSet->next()) {
                Equipamento* equipamento = new Equipamento;

                equipamento->nome = resultSet->getString("nome").c_str();
                equipamento->custo_hora = resultSet->getDouble("custo");
                //equipamento->despacho = nullptr;

                ret->push_back(equipamento);
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }

        return ret;
    }

    void EquipamentoDAO::insertEquipamento(Equipamento* equipamento) {
        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("INSERT INTO equipamento VALUES (?, ?, null);");
            pstmt->setString(1, equipamento->nome);
            pstmt->setDouble(2, equipamento->custo_hora);

            pstmt->executeUpdate();
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }
    }

    EquipamentoDAO::~EquipamentoDAO() {}
}
