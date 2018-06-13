#pragma once

#include <string>

#include "Usuario.h"

namespace InfoBuraco {
    class UsuarioDAO {
    public:
        UsuarioDAO();
        virtual ~UsuarioDAO();

        Usuario* getUser(std::string login, std::string password);
    };
}
