#pragma once

#include "Buraco.h"
#include "Despacho.h"

#include "OSDAO.h"
#include "OSController.h"

namespace InfoBuraco {
    class OS {
        friend class OSDAO;
        friend class OSController;

    public:
        enum status_t {
            PARADA, EXECUCAO, CONCLUIDA
        };

        OS();
        virtual ~OS();

        int getId();
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
        status_t status;
        int estimativa_pessoal;
        int estimativa_equipamento;
        int estimativa_material;

        Buraco* buraco;
        Despacho* despacho;
    };
}
