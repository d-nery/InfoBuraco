#include "Equipamento.h"

namespace InfoBuraco {
    Equipamento::Equipamento() {}

    Equipamento::~Equipamento() {}

    std::string Equipamento::getNome() {
        return this->nome;
    }

    double Equipamento::getCusto() {
        return this->custo_hora;
    }

    //Despacho* Equipamento::getDespacho() {
    //   return this->despacho;
    //}
}
