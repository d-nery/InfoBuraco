#include "Buraco.h"

namespace InfoBuraco {
    Buraco::Buraco() {}

    std::string Buraco::getLocalizacao() {
        return this->localizacao;
    }

    std::string Buraco::getRegional() {
        return this->regional;
    }

    int Buraco::getId() {
        return this->id_buraco;
    }

    int Buraco::getTamanho() {
        return this->tamanho;
    }

    int Buraco::getPosicao() {
        return this->posicao;
    }

    int Buraco::getNumeroReclamacoes() {
        return this->n_reclamacoes;
    }

    Buraco::~Buraco() {}
}
