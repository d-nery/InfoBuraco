#pragma once

#include <string>

#include "BuracoDAO.h"

namespace InfoBuraco {
    class Buraco {
        friend class BuracoDAO;

    public:
        Buraco();
        virtual ~Buraco();

        std::string getLocalizacao();
        std::string getRegional();
        int getId();
        int getTamanho();
        int getPosicao();
        int getNumeroReclamacoes();

    private:
        int id_buraco;
        std::string localizacao;
        std::string regional;
        int tamanho;
        int posicao;
        int n_reclamacoes;
    };
}
