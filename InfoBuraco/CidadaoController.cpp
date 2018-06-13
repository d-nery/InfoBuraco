#include "CidadaoController.h"
#include "Cidadao.h"
#include "CidadaoDAO.h"

namespace InfoBuraco {
    CidadaoController::CidadaoController() {}

    Cidadao* CidadaoController::buscarCidadao(std::string nome) {
        Cidadao* cidadao = nullptr;
        CidadaoDAO cidadaoDAO;

        cidadao = cidadaoDAO.getCitizen(nome);

        return cidadao;

    }
    
    void CidadaoController::buscarECriarCidadao(std::map<std::string, std::string> data) {
        Cidadao* cidadao = nullptr;
        CidadaoDAO cidadaoDAO;

        cidadao = cidadaoDAO.getCitizen(data["nome"]);

        // Ja existe
        if (cidadao != nullptr) {
            System::Windows::Forms::MessageBox::Show("Cidadao Existente");
            return;
        }

        // Cria
        cidadao = new Cidadao();
        cidadao->setNome(data["nome"]);
        cidadao->setEmail(data["email"]);
        cidadao->setTelefone(data["telefone"]);

        cidadaoDAO.insertCidadao(cidadao);
    }

    CidadaoController::~CidadaoController() {}
}
