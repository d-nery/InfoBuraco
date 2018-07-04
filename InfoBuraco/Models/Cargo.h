#pragma once

#include <cstdint>
#include <string>

#include "CargoDAO.h"

namespace InfoBuraco {
    class Cargo {
        friend class CargoDAO;

    public:
        Cargo();
        virtual ~Cargo();

        int getId();
        std::string getName();
        uint16_t getPermissionMask();

    private:
        int id;
        std::string name;
        uint16_t permission_mask;
    };
}
