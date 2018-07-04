#include "Usuario.h"

namespace InfoBuraco {
    Usuario::Usuario() {
        this->login = "";
        this->name = "";
    }

    Usuario::~Usuario() {}

    std::string Usuario::getLogin() {
        return this->login;
    }

    std::string Usuario::getName() {
        return this->name;
    }

    Cargo* Usuario::getCargo() {
        return this->cargo;
    }
}
