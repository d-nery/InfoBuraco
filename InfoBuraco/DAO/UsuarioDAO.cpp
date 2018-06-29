#include <msclr/marshal_cppstd.h>

#include "MySQL.h"
#include "UsuarioDAO.h"
#include "CargoDAO.h"

namespace InfoBuraco {
    UsuarioDAO::UsuarioDAO() {
    }

    Usuario* UsuarioDAO::getUser(std::string login, std::string password) {
        CargoDAO cargoDAO;
        Usuario* usuario = nullptr;

        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;
        sql::ResultSet* resultSet;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT * FROM usuario WHERE login = ? and senha = UNHEX(SHA2(?, 256));");
            pstmt->setString(1, login.data());
            pstmt->setString(2, password.data());

            resultSet = pstmt->executeQuery();
            if (resultSet->next()) {
                usuario = new Usuario;
                usuario->login = resultSet->getString("login").c_str();
                usuario->password = resultSet->getString("senha").c_str();
                usuario->name = resultSet->getString("nome").c_str();
                usuario->cargo = cargoDAO.getCargo(resultSet->getInt("cargo_id"));
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }

        return usuario;
    }

    UsuarioDAO::~UsuarioDAO() {
    }
}
