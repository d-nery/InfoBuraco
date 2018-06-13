#include "Cidadao.h"

namespace InfoBuraco {
    Cidadao::Cidadao() {}

    std::string Cidadao::getNome() {
        return this->nome;
    }
    
    std::string Cidadao::getTelefone() {
        return this->telefone;
    }

    std::string Cidadao::getEmail() {
        return this->email;
    }

    void Cidadao::setNome(std::string value) {
        this->nome = value;
    }

    void Cidadao::setTelefone(std::string value) {
        this->telefone = value;
    }

    void Cidadao::setEmail(std::string value) {
        this->email = value;
    }

    Cidadao::~Cidadao() {}
}
