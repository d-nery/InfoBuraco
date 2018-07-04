#include "TelaDashboard.h"

#include "TelaEquipamento.h"
#include "TelaListaNotificacao.h"
#include "TelaListaMateriais.h"

namespace InfoBuraco {
    TelaDashboard::TelaDashboard(Usuario* user, Login^ org_login) {
        InitializeComponent();

        this->usuario_logado = user;

        this->user_name->Text = msclr::interop::marshal_as<System::String^>(this->usuario_logado->getName());
        this->user_cargo->Text = msclr::interop::marshal_as<System::String^>(this->usuario_logado->getCargo()->getName());

        this->original_login = org_login;
        this->telaEquipamento = gcnew TelaEquipamento(this->usuario_logado);
        this->telaListaNotificacao = gcnew TelaListaNotificacao(this->usuario_logado);
        this->telaListaMateriais = gcnew TelaListaMateriais(this->usuario_logado);
    }

    System::Void TelaDashboard::button1_Click(System::Object^ sender, System::EventArgs^  e) {
        this->original_login->Visible = true;
        delete this;
    }

    System::Void TelaDashboard::equipamentosBtn_click(System::Object^ sender, System::EventArgs^  e) {
        this->telaEquipamento->Visible = true;
    }

    System::Void TelaDashboard::notificacoesBtn_Click(System::Object^  sender, System::EventArgs^  e) {
        this->telaListaNotificacao->Visible = true;
    }

    System::Void TelaDashboard::materiaisBtn_Click(System::Object^  sender, System::EventArgs^  e) {
        this->telaListaMateriais->Visible = false;
    }

    TelaDashboard::~TelaDashboard() {
        if (this->components) {
            delete this->components;
        }

        delete this->telaEquipamento;
        delete this->telaListaNotificacao;
    }
}
