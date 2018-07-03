#pragma once

#include "Buraco.h"

#include "OSDAO.h"

namespace InfoBuraco {
    class OS {
        friend class OSDAO;

    public:
        OS();
        virtual ~OS();

        int getPrioridade();
        bool getStatus();
        int getEstimativaPessoal();
        int getEstimativaEquipamento();
        int getEstimativaMaterial();
        int getEstimativaTotal();
        Buraco* getBuraco();

    private:
        int id_os;
        int prioridade;
        bool status;
        int estimativa_pessoal;
        int estimativa_equipamento;
        int estimativa_material;

        Buraco* buraco;
        // Despacho* despacho;
    };
}
