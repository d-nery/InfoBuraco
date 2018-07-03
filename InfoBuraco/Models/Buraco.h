#pragma once

#include <string>

#include "BuracoDAO.h"
#include "BuracoController.h"

namespace InfoBuraco {
    class Buraco {
        friend class BuracoDAO;
        friend class BuracoController;

    public:
        Buraco();
        virtual ~Buraco();

        std::string getLocalizacao();
        std::string getRegional();
        int getId();
        int getTamanho();
        int getPosicao();
        int getNumeroReclamacoes();
        int getReincidencia();
        bool isAberto();

        void setTamanho(int t);
        void setPosicao(int p);
        void increaseNotifications();
        void increaseReincidencia();
        void open();
        void close();

    private:
        int id_buraco;
        std::string localizacao;
        std::string regional;
        int tamanho;
        int posicao;
        int n_reclamacoes;
        int reincidente;
        bool aberto;
    };
}
