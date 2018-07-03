#include <msclr/marshal_cppstd.h>
#include <sstream>

#include "TelaEquipamento.h"
#include "Equipamento.h"
#include "EquipamentoController.h"

#define conv_sysstring(x) msclr::interop::marshal_as<System::String^>(x)

namespace InfoBuraco {
    System::Void TelaEquipamento::load(System::Object^ sender, System::EventArgs^  e) {
        System::Diagnostics::Debug::Print("TelaEquipamento Load");

        EquipamentoController equipamentoCtrl;

        std::vector<Equipamento*>* equips = equipamentoCtrl.getAll();

        for (auto equip : *equips) {
            System::Diagnostics::Debug::Print("Adicionando Equipamento");
            String^ patrimonio = conv_sysstring(equip->getNome());
            String^ custo = conv_sysstring(std::to_string(equip->getCusto()));
            //bool alocado = (buraco->getDespacho() != nullptr);
            this->equipamentosGrid->Rows->Add(gcnew array<System::String^> { patrimonio, custo });
        }
    }

    System::Void TelaEquipamento::addBtn_Click(System::Object^ sender, System::EventArgs^  e) {
        //TelaNotificacao^ telaNotificacao = gcnew TelaNotificacao(this->usuario_logado);
        //telaNotificacao->ShowDialog();
    }
}
