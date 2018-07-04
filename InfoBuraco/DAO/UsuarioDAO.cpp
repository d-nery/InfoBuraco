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
            if (password.empty()) {
                pstmt = conn->prepareStatement("SELECT * FROM usuario WHERE login = ?;");
                pstmt->setString(1, login.data());
            } else {
                pstmt = conn->prepareStatement("SELECT * FROM usuario WHERE login = ? and senha = UNHEX(SHA2(?, 256));");
                pstmt->setString(1, login.data());
                pstmt->setString(2, password.data());
            }

            resultSet = pstmt->executeQuery();
            if (resultSet->next()) {
                usuario = new Usuario;
                usuario->login = resultSet->getString("login").c_str();
                usuario->name = resultSet->getString("nome").c_str();
                usuario->cargo = cargoDAO.getCargo(resultSet->getInt("cargo_id"));
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print("Erro getUser");
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }

        return usuario;
    }

    std::vector<Usuario*>* UsuarioDAO::getAll() {
		CargoDAO cargoDAO;
        std::vector<Usuario*>* ret = new std::vector<Usuario*>;

        sql::Connection* conn = nullptr;
        sql::ResultSet* resultSet;
        sql::PreparedStatement* pstmt;

        int temp_int;
        std::string temp_str;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT * FROM usuario;");

            resultSet = pstmt->executeQuery();
            while (resultSet->next()) {
                Usuario* usuario = new Usuario;

				usuario->login = resultSet->getString("login").c_str();
				usuario->name = resultSet->getString("nome").c_str();
				usuario->cargo = cargoDAO.getCargo(resultSet->getInt("cargo_id"));

                ret->push_back(usuario);
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }

        return ret;
    }

    void UsuarioDAO::insertUsuario(Usuario* usuario, std::string password) {
		CargoDAO cargoDAO;
        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("INSERT INTO usuario VALUES (?, UNHEX(SHA2(?)), ?, ?);");

			pstmt->setString(1, usuario->login);
            pstmt->setString(2, password);
            pstmt->setString(3, usuario->name);
            pstmt->setInt(3, usuario->cargo->getId());

            pstmt->executeUpdate();
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }
    }

    UsuarioDAO::~UsuarioDAO() {
    }
}
