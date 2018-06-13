#pragma once

#include <string>

#include "Equipamento.h"

namespace InfoBuraco {
    class EquipamentoDAO {
    public:
        EquipamentoDAO();
        virtual ~EquipamentoDAO();

        Equipamento* getEquipment(std::string name);
    };
}

