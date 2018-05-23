#include "Dashboard.h"
#include "TelaEquipamento.h"

namespace InfoBuraco {
    System::Void Dashboard::button1_Click(System::Object^ sender, System::EventArgs^  e) {
        this->original_login->Visible = true;
        delete this;
    }

    System::Void Dashboard::equipamentosBtn_click(System::Object^ sender, System::EventArgs^  e) {
        TelaEquipamento^ telaEquipamento = gcnew TelaEquipamento;
        telaEquipamento->Visible = true;
    }
}