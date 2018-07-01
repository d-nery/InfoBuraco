#include <vector>

#include "BuracoController.h"
#include "Buraco.h"
#include "BuracoDAO.h"

namespace InfoBuraco {
    BuracoController::BuracoController() {}

    Buraco* BuracoController::buscarBuraco(std::string localizacao, std::string regional) {
        Buraco* buraco = nullptr;
        BuracoDAO buracoDAO;

        buraco = buracoDAO.getBuraco(localizacao, regional);

        return buraco;
    }

    Buraco* BuracoController::criarBuraco(std::map<std::string, std::string> data, std::map<std::string, int> int_data) {
        Buraco* buraco = nullptr;
        BuracoDAO buracoDAO;

        buraco = buracoDAO.getBuraco(data["localizacao"], data["regional"]);

        // Ja existe
        if (buraco != nullptr) {
            System::Windows::Forms::MessageBox::Show("Buraco Existente");
            return buraco;
        }

        // Cria
        buraco = new Buraco();
        buraco->localizacao = data["localizacao"];
        buraco->regional = data["regional"];

        buraco->tamanho = int_data["tamanho"];
        buraco->posicao = int_data["posicao"];
        buraco->n_reclamacoes = 1;

        buraco->id_buraco = buracoDAO.insertBuraco(buraco);

        return buraco;
    }

    void BuracoController::atualizarBuraco(Buraco* buraco) {
        if (buraco == nullptr) {
            System::Diagnostics::Debug::Print("Tried do Update null buraco");
            return;
        }

        BuracoDAO buracoDAO;
        buracoDAO.updateBuraco(buraco);
    }


    BuracoController::~BuracoController() {}
}
