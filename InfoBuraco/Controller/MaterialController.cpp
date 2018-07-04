#include "MaterialController.h"
#include "Material.h"

namespace InfoBuraco {
    MaterialController::MaterialController() {}

    MaterialController::~MaterialController() {}

    Material* MaterialController::buscarMaterial(std::string nome) {
        Material* material = nullptr;
        MaterialDAO materialDAO;

        material = materialDAO.getMaterial(nome);

        return material;
    }

    std::vector<Material*>* MaterialController::getAll() {
        std::vector<Material*>* materials = nullptr;
        MaterialDAO materialDAO;

        materials = materialDAO.getAll();

        return materials;
    }

    Material* MaterialController::criarMaterial(std::string nome, std::string unidade, double custo, int quantidade) {
        Material* material = nullptr;
        MaterialDAO materialDAO;

        // Cria
        material = materialDAO.getMaterial(nome);

        if (material != nullptr) {
            System::Diagnostics::Debug::Print("Tentando criar Material ja existente!");
            return nullptr;
        }

        material = new Material();

        material->nome = nome;
        material->unidade = unidade;
        material->custo = custo;
        material->quantidade = quantidade;

        materialDAO.insertMaterial(material);

        return material;
    }
}
