#include "EquipamentoController.h"

namespace InfoBuraco {
    EquipamentoController::EquipamentoController() {}

    EquipamentoController::~EquipamentoController() {}

    Equipamento* EquipamentoController::buscarEquipamento(std::string nome) {
        Equipamento* equipamento = nullptr;
        EquipamentoDAO equipamentoDAO;

        equipamento = equipamentoDAO.getEquipamento(nome);

        return equipamento;
    }

    std::vector<Equipamento*>* EquipamentoController::getAll() {
        std::vector<Equipamento*>* equipamentos = nullptr;
        EquipamentoDAO equipamentoDAO;

        equipamentos = equipamentoDAO.getAll();

        return equipamentos;
    }

    Equipamento* EquipamentoController::criarEquipamento(std::string nome, double custo) {
        Equipamento* equipamento = nullptr;
        EquipamentoDAO equipamentoDAO;

        // Cria
        equipamento = equipamentoDAO.getEquipamento(nome);

        if (equipamento != nullptr) {
            System::Diagnostics::Debug::Print("Tentando criar equipamento ja existente!");
            return nullptr;
        }

        equipamento = new Equipamento();

        equipamento->nome = nome;
        equipamento->custo_hora = custo;
        //equipamento->despacho = nullptr;

        equipamentoDAO.insertEquipamento(equipamento);

        return equipamento;
    }
}
