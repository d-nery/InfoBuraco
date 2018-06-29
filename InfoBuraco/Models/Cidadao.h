#pragma once

#include <string>

#include "CidadaoDAO.h"

namespace InfoBuraco {
    class Cidadao {
        friend class CidadaoDAO;
    public:
        Cidadao();
        virtual ~Cidadao();

        std::string getNome();
        std::string getTelefone();
        std::string getEmail();
        std::string getFacebook();

        void setNome(std::string value);
        void setTelefone(std::string value);
        void setEmail(std::string value);
        void setFacebook(std::string value);

    private:
        std::string nome;
        std::string telefone;
        std::string email;
        std::string facebook;
    };
}
