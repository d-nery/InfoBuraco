#include "MySQL.h"
#include "UsuarioDAO.h"

namespace InfoBuraco {
    UsuarioDAO::UsuarioDAO() {
    }

    Usuario* UsuarioDAO::getUser(std::string login, std::string password) {
        std::string log;
        Usuario* usuario = nullptr;

        sql::Connection* conn;
        sql::PreparedStatement* pstmt;
        sql::ResultSet* resultSet;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT login, senha, email FROM Usuario where login = ? and senha = ?");
            pstmt->setString(1, login.data());
            pstmt->setString(2, password.data());

            resultSet = pstmt->executeQuery();
            if (resultSet->next()) {
                usuario = new Usuario;
                usuario->setLogin(resultSet->getString(1).c_str());
                usuario->setPassword(resultSet->getString(2).c_str());
                usuario->setEmail(resultSet->getString(3).c_str());
            }
        } catch (sql::SQLException& e) {
            conn->close();
            log = e.what();
        }

        return usuario;
    }

    UsuarioDAO::~UsuarioDAO() {
    }
}