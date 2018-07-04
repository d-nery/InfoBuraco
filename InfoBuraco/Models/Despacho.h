#pragma once

#include <string>
#include <vector>

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
        int getDuracaoConserto();
        int getDuracaoDeslocamento();
        int getCustoDeslocamento();
        int getCustoConserto();

        std::vector<Material*> getMateriais();
        std::vector<Equipamento*> getEquipamentos();

    private:
        int id_despacho;
        int duracao_conserto;
        int duracao_deslocamento;
        int custo_deslocamento;
        int custo_conserto;

        std::vector<Material*> materiais;
        std::vector<Equipamento*> equipamentos;
    };
}
