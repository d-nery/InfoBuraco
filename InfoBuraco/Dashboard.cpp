#include "Dashboard.h"
#include "Equipamento.h"

namespace InfoBuraco {
    System::Void Dashboard::button1_Click(System::Object^  sender, System::EventArgs^  e) {
        this->original_login->Visible = true;
        delete this;
    }

    System::Void Dashboard::equipamentosBtn_click(System::Object^  sender, System::EventArgs^  e) {
        Equipamento^ equipamento = gcnew Equipamento;
        equipamento->Visible = true;
    }
}