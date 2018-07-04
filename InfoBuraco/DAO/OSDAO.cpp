#include <msclr/marshal_cppstd.h>
#include <boost/date_time.hpp>

#include "MySQL.h"
#include "OSDAO.h"
#include "BuracoDAO.h"

namespace InfoBuraco {
    OSDAO::OSDAO() {}

    OS* OSDAO::getOS(int id) {
        OS* os = nullptr;

        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;
        sql::ResultSet* resultSet;

        int temp_int;

        BuracoDAO buracoDAO;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT * FROM ordemservico WHERE id_os = ?");
            pstmt->setInt(1, id);

            resultSet = pstmt->executeQuery();
            if (resultSet->next()) {
                os = new OS;
                os->id_os = resultSet->getInt("id_os");
                os->prioridade = resultSet->getInt("prioridade");
                os->status = (OS::status_t) resultSet->getInt("status");
                os->estimativa_pessoal = resultSet->getInt("estimativa_pessoal");
                os->estimativa_material = resultSet->getInt("estimativa_material");
                os->estimativa_equipamento = resultSet->getInt("estimativa_equipamento");

                temp_int = resultSet->getInt("buraco_id");
                os->buraco = buracoDAO.getBuraco(temp_int);
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }

        return os;
    }

    std::vector<OS*>* OSDAO::getAll() {
        std::vector<OS*>* ret = new std::vector<OS*>;

        sql::Connection* conn = nullptr;
        sql::ResultSet* resultSet;
        sql::PreparedStatement* pstmt;

        int temp_int;
        std::string temp_str;

        BuracoDAO buracoDAO;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT * FROM ordemservico LIMIT 100;");

            resultSet = pstmt->executeQuery();
            while (resultSet->next()) {
                OS* os = new OS;
                os->id_os = resultSet->getInt("id_os");
                os->prioridade = resultSet->getInt("prioridade");
                os->status = (OS::status_t) resultSet->getInt("status");
                os->estimativa_pessoal = resultSet->getInt("estimativa_pessoal");
                os->estimativa_material = resultSet->getInt("estimativa_material");
                os->estimativa_equipamento = resultSet->getInt("estimativa_equipamento");

                temp_int = resultSet->getInt("buraco_id");
                os->buraco = buracoDAO.getBuraco(temp_int);

                ret->push_back(os);
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }

        return ret;
    }

    int OSDAO::insertOS(OS* os) {
        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("INSERT INTO ordemservico VALUES (null, ?, ?, ?, ?, ?, ?, null);");
            pstmt->setInt(1, os->prioridade);
            pstmt->setInt(2, os->status);
            pstmt->setInt(3, os->estimativa_pessoal);
            pstmt->setInt(4, os->estimativa_equipamento);
            pstmt->setInt(5, os->estimativa_material);
            pstmt->setInt(6, os->buraco->getId());
            

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

    int OSDAO::getLastId() {
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

    OSDAO::~OSDAO() {}
}
