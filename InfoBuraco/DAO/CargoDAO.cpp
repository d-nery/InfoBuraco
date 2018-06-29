#include <msclr/marshal_cppstd.h>

#include "MySQL.h"
#include "CargoDAO.h"

namespace InfoBuraco {
    CargoDAO::CargoDAO() {
    }

    Cargo* CargoDAO::getCargo(int id) {
        Cargo* cargo = nullptr;

        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;
        sql::ResultSet* resultSet;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT * FROM cargo WHERE id = ?;");
            pstmt->setInt(1, id);

            resultSet = pstmt->executeQuery();
            if (resultSet->next()) {
                cargo = new Cargo;
                cargo->id = resultSet->getInt("id");
                cargo->name = resultSet->getString("name").c_str();
                cargo->permission_mask = resultSet->getInt("permission_mask");
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }

        return cargo;
    }

    CargoDAO::~CargoDAO() {
    }
}
