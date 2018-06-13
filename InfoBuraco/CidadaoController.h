#pragma once

#include <map>
#include <string>

#include "Cidadao.h"

namespace InfoBuraco {
    class CidadaoController {
    public:
        CidadaoController();
        virtual ~CidadaoController();
        
        Cidadao* CidadaoController::buscarCidadao(std::string nome);
        void buscarECriarCidadao(std::map<std::string, std::string> data);
    };
}

