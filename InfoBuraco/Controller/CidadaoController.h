#pragma once

#include <map>
#include <string>

#include "Cidadao.h"

namespace InfoBuraco {
    class CidadaoController {
    public:
        CidadaoController();
        virtual ~CidadaoController();

        Cidadao* buscarCidadao(std::string nome);
        std::vector<Cidadao*>* getAll();
        void criarCidadao(std::map<std::string, std::string> data);
    };
}
