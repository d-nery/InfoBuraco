#pragma once

#include <string>
#include <vector>

#include "Cidadao.h"

namespace InfoBuraco {
    class Cidadao;

    class CidadaoDAO {
    public:
        CidadaoDAO();
        virtual ~CidadaoDAO();

        Cidadao* getCitizen(std::string name);
        std::vector<Cidadao*>* getAll();
        void insertCidadao(Cidadao* cidadao);
        void updateCidadao(Cidadao* cidadao);
    };
}
