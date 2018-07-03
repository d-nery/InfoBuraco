#pragma once

#include <string>

//#include "Despacho.h"

#include "EquipamentoDAO.h"
#include "EquipamentoController.h"

namespace InfoBuraco {
    class Equipamento {
        friend class EquipamentoDAO;
        friend class EquipamentoController;

    public:
        Equipamento();
        virtual ~Equipamento();

        std::string getNome();
        double getCusto();
  //      Despacho* getDespacho();

    private:
        std::string nome;
        double custo_hora;

    //    Despacho* despacho;
    };
}
