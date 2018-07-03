#pragma once

#include <map>
#include <string>

#include "OS.h"
#include "Buraco.h"
#include "Cidadao.h"
#include "Usuario.h"

namespace InfoBuraco {
    class OS;

    class OSController {
    public:
        OSController();
        virtual ~OSController();

        OS* buscarOS(int id);
        std::vector<OS*>* getAll();
        OS* criarOS(Buraco* buraco);
    };
}
