#pragma once

#include <string>
#include <vector>

#include "Equipamento.h"

namespace InfoBuraco {
    class Equipamento;

    class EquipamentoDAO {
    public:
        EquipamentoDAO();
        virtual ~EquipamentoDAO();

        Equipamento* getEquipamento(std::string name);
        std::vector<Equipamento*>* getAll();
        void insertEquipamento(Equipamento* equipamento);
    };
}
