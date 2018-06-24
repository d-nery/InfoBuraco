#include <msclr/marshal_cppstd.h>

#include "EquipamentoDAO.h"
#include "MySQL.h"

namespace InfoBuraco {
    EquipamentoDAO::EquipamentoDAO() {}

    Equipamento* EquipamentoDAO::getEquipment(std::string name) {
        Equipamento* equip = nullptr;

        sql::Connection* conn = nullptr;
        sql::PreparedStatement* pstmt;
        sql::ResultSet* resultSet;

        try {
            conn = mySQL.getConnection();
            pstmt = conn->prepareStatement("SELECT nome FROM lala2_equipamento where nome = ?");
            pstmt->setString(1, name.data());

            resultSet = pstmt->executeQuery();
            if (resultSet->next()) {
                equip = new Equipamento;
                equip->setNome(resultSet->getString("nome").c_str());
            }
        } catch (sql::SQLException& e) {
            if (conn != nullptr)
                conn->close();
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
        }

        return equip;
    }

    EquipamentoDAO::~EquipamentoDAO() {}
}
