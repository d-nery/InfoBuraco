#pragma once

#include <string>

#include "BuracoDAO.h"

namespace InfoBuraco {
    class Usuario {
        friend class UsuarioDAO;

    public:
        Usuario();
        virtual ~Usuario();

        void setLogin(std::string login);
        void setPassword(std::string pass);
        void setName(std::string name);

        std::string getLogin();
        std::string getPassword();
        std::string getName();

    private:
        std::string login;
        std::string password;
        std::string name;
    };
}
