#pragma once

#include <string>

#include "Cidadao.h"

namespace InfoBuraco {
    class CidadaoDAO {
    public:
        CidadaoDAO();
        virtual ~CidadaoDAO();

        Cidadao* getCitizen(std::string name);
        void insertCidadao(Cidadao* cidadao);
    };
}
