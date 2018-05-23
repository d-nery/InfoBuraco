#pragma once

#include <string>

namespace InfoBuraco {
    class Usuario {
    public:
        Usuario();
        virtual ~Usuario();

        void setLogin(std::string login);
        void setPassword(std::string pass);
        void setEmail(std::string pass);

        std::string getLogin();
        std::string getPassword();
        std::string getEmail();
    
    private:
        std::string login;
        std::string password;
        std::string email;
    };
}
