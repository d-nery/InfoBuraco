#include "Usuario.h"

namespace InfoBuraco {
    Usuario::Usuario() {
        this->login = "";
        this->password = "";
        this->name = "";
    }

    Usuario::~Usuario() {}

    void Usuario::setLogin(std::string login) {
        this->login = login;
    }

    void Usuario::setPassword(std::string pass) {
        this->password = pass;
    }

    void Usuario::setName(std::string name) {
        this->name = name;
    }

    std::string Usuario::getLogin() {
        return this->login;
    }

    std::string Usuario::getPassword() {
        return this->password;
    }

    std::string Usuario::getName() {
        return this->name;
    }

    Cargo* Usuario::getCargo() {
        return this->cargo;
    }
}
