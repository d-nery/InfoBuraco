#include "TelaDashboard.h"
#include "TelaEquipamento.h"
#include "TelaNotificacao.h"

namespace InfoBuraco {
    System::Void TelaDashboard::button1_Click(System::Object^ sender, System::EventArgs^  e) {
        this->original_login->Visible = true;
        delete this;
    }

    System::Void TelaDashboard::equipamentosBtn_click(System::Object^ sender, System::EventArgs^  e) {
        TelaEquipamento^ telaEquipamento = gcnew TelaEquipamento;
        telaEquipamento->Visible = true;
    }

    System::Void TelaDashboard::notificacoesBtn_Click(System::Object^  sender, System::EventArgs^  e) {
        TelaNotificacao^ telaNotificacao = gcnew TelaNotificacao;
        telaNotificacao->Visible = true;
    }
}