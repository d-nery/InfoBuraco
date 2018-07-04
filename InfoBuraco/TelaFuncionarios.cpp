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
            // String^ patrimonio = conv_sysstring(equip->getNome());
            // String^ custo = conv_sysstring(std::to_string(equip->getCusto()));
            //bool alocado = (buraco->getDespacho() != nullptr);
            // this->funcionariossGrid->Rows->Add(gcnew array<System::String^> { patrimonio, custo });
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
