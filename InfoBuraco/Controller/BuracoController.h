#pragma once

#include <map>
#include <string>

#include "Buraco.h"

namespace InfoBuraco {
    class Buraco;

    class BuracoController {
    public:
        BuracoController();
        virtual ~BuracoController();

        Buraco* buscarBuraco(std::string localizacao, int posicao);
        Buraco* criarBuraco(std::map<std::string, std::string> data, std::map<std::string, int> int_data);
        void atualizarBuraco(Buraco* buraco);
    };
}
