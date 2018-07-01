#pragma once

#include <map>
#include <string>

#include "Cidadao.h"

namespace InfoBuraco {
    class CidadaoController {
    public:
        CidadaoController();
        virtual ~CidadaoController();

        Cidadao* buscarCidadao(std::string email);
        std::vector<Cidadao*>* getAll();
        Cidadao* criarCidadao(std::map<std::string, std::string> data);
        void atualizarCidadao(Cidadao* cidadao);
    };
}
