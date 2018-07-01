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

    void Buraco::setTamanho(int t) {
        this->tamanho = t;
    }

    void Buraco::setPosicao(int p) {
        this->posicao = p;
    }

    void Buraco::increaseNotifications() {
        this->n_reclamacoes++;
    }


    Buraco::~Buraco() {}
}
