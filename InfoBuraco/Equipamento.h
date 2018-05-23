#pragma once

#include <string>

namespace InfoBuraco {
    class Equipamento {
    public:
        Equipamento();
        virtual ~Equipamento();

        void setNome(std::string nome);
        void setNumeroPatrimonio(int n);

        std::string getNome();
        int getNumeroPatrimonio();
    
    private:
        std::string nome;
        int numeroPatrimonio;
    };
}
