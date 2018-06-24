#include "Equipamento.h"

namespace InfoBuraco {
    Equipamento::Equipamento() {}

    Equipamento::~Equipamento() {}

    void Equipamento::setNome(std::string nome) {
        this->nome = nome;
    }

    void Equipamento::setNumeroPatrimonio(int n) {
        this->numeroPatrimonio = n;
    }

    std::string Equipamento::getNome() {
        return this->nome;
    }

    int Equipamento::getNumeroPatrimonio() {
        return this->numeroPatrimonio;
    }
}
