#pragma once

#include <string>

#include "Usuario.h"

namespace InfoBuraco {
    class SecurityController {
    public:
        SecurityController();
        virtual ~SecurityController();

        Usuario* login(std::string login, std::string pass);
    };
}
