#pragma once

#include <string>
#include <vector>

#include "Usuario.h"

namespace InfoBuraco {
    class Usuario;

    class UsuarioDAO {
    public:
        UsuarioDAO();
        virtual ~UsuarioDAO();

        Usuario* getUser(std::string login, std::string password="");
        std::vector<Usuario*>* getAll();
        void insertUsuario(Usuario* usuario);
    };
}
