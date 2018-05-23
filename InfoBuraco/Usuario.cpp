#include "Usuario.h"

namespace InfoBuraco {

    Usuario::Usuario() {
        this->login = "";
        this->password = "";
    }

    void Usuario::setLogin(std::string login) {
        this->login = login;
    }

    void Usuario::setPassword(std::string pass) {
        this->password = pass;
    }

    void Usuario::setEmail(std::string email) {
        this->email = email;
    }

    std::string Usuario::getLogin() {
        return this->login;
    }

    std::string Usuario::getPassword() {
        return this->password;
    }

    std::string Usuario::getEmail() {
        return this->email;
    }

    Usuario::~Usuario() {
    }
}
