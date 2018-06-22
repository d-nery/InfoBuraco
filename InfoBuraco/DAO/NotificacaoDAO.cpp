#include "MySQL.h"
#include "NotificacaoDAO.h"

namespace InfoBuraco {
    NotificacaoDAO::NotificacaoDAO() {
    }

    Notificacao* NotificacaoDAO::getNotificacao(int id) {
        std::string log;
        Notificacao* notificacao = nullptr;

        sql::Connection* conn;
        sql::PreparedStatement* pstmt;
        sql::ResultSet* resultSet;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT * FROM notificacao WHERE id_notificacao = ?");
            pstmt->setInt(1, id);

            resultSet = pstmt->executeQuery();
            if (resultSet->next()) {
                notificacao = new Notificacao;
                notificacao->setId(resultSet->getInt(1));
                notificacao->setReclamacao(resultSet->getString(2).c_str());
                notificacao->setLogin(resultSet->getString(3).c_str());
                notificacao->setEmail(resultSet->getString(3).c_str());
                notificacao->setIdentificacao(resultSet->getString(4).c_str());
            }
        } catch (sql::SQLException& e) {
            conn->close();
            log = e.what();
        }

        return usuario;
    }

    NotificacaoDAO::~NotificacaoDAO() {
    }
}
