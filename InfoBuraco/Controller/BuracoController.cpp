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

    // void BuracoController::criarBuraco(std::map<std::string, std::string> data) {
    //     Buraco* Buraco = nullptr;
    //     BuracoDAO BuracoDAO;

    //     Buraco = BuracoDAO.getCitizen(data["nome"]);

    //     // Ja existe
    //     if (Buraco != nullptr) {
    //         System::Windows::Forms::MessageBox::Show("Buraco Existente");
    //         return;
    //     }

    //     // Cria
    //     Buraco = new Buraco();
    //     Buraco->setNome(data["nome"]);
    //     Buraco->setEmail(data["email"]);
    //     Buraco->setTelefone(data["telefone"]);

    //     BuracoDAO.insertBuraco(Buraco);
    // }

    BuracoController::~BuracoController() {}
}
