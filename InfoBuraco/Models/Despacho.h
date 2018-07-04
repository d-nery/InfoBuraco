#pragma once

#include <string>
#include <vector>

#include "boost/date_time.hpp"

#include "Material.h"
#include "Equipamento.h"

#include "DespachoDAO.h"
#include "DespachoController.h"

namespace InfoBuraco {
    class Despacho {
        friend class DespachoDAO;
        friend class DespachoController;

    public:
        Despacho();
        virtual ~Despacho();

        int getId();
        boost::posix_time::ptime getDataDespacho();
        int getDuracaoConserto();
        int getDuracaoDeslocamento();
        int getCustoDeslocamento();
        int getCustoConserto();

        std::vector<Material*> getMateriais();
        std::vector<Equipamento*> getEquipamentos();

    private:
        int id_despacho;
        boost::posix_time::ptime data_despacho;
        int duracao_conserto;
        int duracao_deslocamento;
        int custo_deslocamento;
        int custo_conserto;

        std::vector<Material*> materiais;
        std::vector<Equipamento*> equipamentos;
    };
}
