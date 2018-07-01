#include <vector>

#include "CidadaoController.h"
#include "Cidadao.h"
#include "CidadaoDAO.h"

namespace InfoBuraco {
    CidadaoController::CidadaoController() {}

    Cidadao* CidadaoController::buscarCidadao(std::string email) {
        Cidadao* cidadao = nullptr;
        CidadaoDAO cidadaoDAO;

        cidadao = cidadaoDAO.getCitizen(email);

        return cidadao;
    }

    std::vector<Cidadao*>* CidadaoController::getAll() {
        std::vector<Cidadao*>* cidadaos = nullptr;
        CidadaoDAO cidadaoDAO;

        cidadaos = cidadaoDAO.getAll();

        return cidadaos;
    }

    Cidadao* CidadaoController::criarCidadao(std::map<std::string, std::string> data) {
        Cidadao* cidadao = nullptr;
        CidadaoDAO cidadaoDAO;

        cidadao = cidadaoDAO.getCitizen(data["email"]);

        // Ja existe
        if (cidadao != nullptr) {
            System::Windows::Forms::MessageBox::Show("Cidadao Existente");
            return cidadao;
        }

        // Cria
        cidadao = new Cidadao();
        cidadao->setNome(data["nome"]);
        cidadao->setEmail(data["email"]);
        cidadao->setTelefone(data["telefone"]);
        cidadao->setFacebook(data["facebook"]);

        cidadaoDAO.insertCidadao(cidadao);

        return cidadao;
    }

    void CidadaoController::atualizarCidadao(Cidadao* cidadao) {
        if (cidadao == nullptr) {
            System::Diagnostics::Debug::Print("Tried do Update null cidadao");
            return;
        }

        CidadaoDAO cidadaoDAO;
        cidadaoDAO.updateCidadao(cidadao);
    }


    CidadaoController::~CidadaoController() {}
}
