#include <msclr/marshal_cppstd.h>
#include <sstream>

#include "TelaFuncionarios.h"
#include "TelaNovoFuncionario.h"
#include "Usuario.h"
#include "UsuarioController.h"

#define conv_sysstring(x) msclr::interop::marshal_as<System::String^>(x)

namespace InfoBuraco {
    System::Void TelaFuncionarios::load(System::Object^ sender, System::EventArgs^  e) {
        System::Diagnostics::Debug::Print("TelaFuncionario Load");

        UsuarioController userCtrl;

        std::vector<Usuario*>* users = userCtrl.getAll();

        for (auto user : *users) {
            System::Diagnostics::Debug::Print("Adicionando Funcionario");
            String^ nome = conv_sysstring(user->getName());
            String^ login = conv_sysstring(user->getLogin());
            String^ cargo = conv_sysstring(user->getCargo()->getName());
            this->funcionariosGrid->Rows->Add(gcnew array<System::String^> { nome, login, cargo });
        }
    }

    System::Void TelaFuncionarios::addBtn_Click(System::Object^ sender, System::EventArgs^  e) {
        TelaNovoFuncionario^ telaNovoFuncionario = gcnew TelaNovoFuncionario(this->usuario_logado);
        telaNovoFuncionario->ShowDialog();
    }

    System::Void TelaFuncionarios::closeBtn_Click(System::Object^  sender, System::EventArgs^  e) {
        this->Visible = false;
    }

}
