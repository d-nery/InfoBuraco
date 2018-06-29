#pragma once

#include <string>

#include "Cargo.h"

namespace InfoBuraco {
    class Cargo;

    class CargoDAO {
    public:
        CargoDAO();
        virtual ~CargoDAO();

        Cargo* getCargo(int id);
    };
}
