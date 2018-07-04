#pragma once

#include <string>

#include "UsuarioDAO.h"
#include "UsuarioController.h"

#include "BuracoDAO.h"
#include "Cargo.h"

namespace InfoBuraco {
    class Usuario {
        friend class UsuarioDAO;
        friend class UsuarioController;

    public:
        Usuario();
        virtual ~Usuario();

        std::string getLogin();
        std::string getName();
        Cargo* getCargo();

    private:
        std::string login;
        std::string name;
        Cargo* cargo;
    };
}
