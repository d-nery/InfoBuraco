#pragma once

#include <string>

namespace InfoBuraco {
    class Cidadao {
    public:
        Cidadao();
        virtual ~Cidadao();

        std::string getNome();
        std::string getTelefone();
        std::string getEmail();

        void setNome(std::string value);
        void setTelefone(std::string value);
        void setEmail(std::string value);

    private:
        std::string nome;
        std::string telefone;
        std::string email;
    };
}

