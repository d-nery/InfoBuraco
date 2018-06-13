#include "EquipamentoDAO.h"
#include "MySQL.h"

namespace InfoBuraco {
    EquipamentoDAO::EquipamentoDAO() {}

    Equipamento* EquipamentoDAO::getEquipment(std::string name) {
        std::string log;
        Equipamento* equip = nullptr;

        sql::Connection* conn;
        sql::PreparedStatement* pstmt;
        sql::ResultSet* resultSet;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT numeroPatrimonio, nome FROM Equipamento where nome = ?");
            pstmt->setString(1, name.data());

            resultSet = pstmt->executeQuery();
            if (resultSet->next()) {
                equip = new Equipamento;
                equip->setNumeroPatrimonio(resultSet->getInt(1));
                equip->setNome(resultSet->getString(2).c_str());
            }
        } catch (sql::SQLException& e) {
            conn->close();
            log = e.what();
        }

        return equip;
    }

    EquipamentoDAO::~EquipamentoDAO() {}
}