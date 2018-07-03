#pragma once

#include <string>
#include <vector>

#include "OS.h"

namespace InfoBuraco {
    class OS;

    class OSDAO {
    public:
        OSDAO();
        virtual ~OSDAO();

        OS* getOS(int id);
        std::vector<OS*>* getAll();
        int insertOS(OS* OS);

    private:
        int getLastId();
    };
}
