#pragma once

#include <map>
#include <string>

#include "Buraco.h"

namespace InfoBuraco {
    class BuracoController {
    public:
        BuracoController();
        virtual ~BuracoController();

        Buraco* buscarBuraco(std::string localizacao, std::string regional);
        // void criarBuraco(std::map<std::string, std::string> data);
    };
}
