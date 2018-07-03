#pragma once

#include <map>
#include <string>

#include "Equipamento.h"
#include "Buraco.h"
#include "Cidadao.h"
#include "Usuario.h"

namespace InfoBuraco {
    class Equipamento;

    class EquipamentoController {
    public:
        EquipamentoController();
        virtual ~EquipamentoController();

        Equipamento* buscarEquipamento(std::string nome);
        std::vector<Equipamento*>* getAll();
        Equipamento* criarEquipamento(std::string nome, double custo);
    };
}
