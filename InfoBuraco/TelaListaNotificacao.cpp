#include <msclr/marshal_cppstd.h>
#include <vector>

#include "TelaListaNotificacao.h"
#include "TelaNotificacao.h"
#include "Cidadao.h"
#include "CidadaoController.h"

namespace InfoBuraco {

    System::Void TelaListaNotificacao::load(System::Object^ sender, System::EventArgs^  e) {
        CidadaoController cidadaoCtrl;
        
        std::vector<Cidadao*>* cidadaos = cidadaoCtrl.getAll();

        for (Cidadao* cid : *cidadaos) {
            String^ nome = msclr::interop::marshal_as<System::String^>(cid->getNome());
            String^ email = msclr::interop::marshal_as<System::String^>(cid->getEmail());
            String^ fone = msclr::interop::marshal_as<System::String^>(cid->getTelefone());
            this->notificationsGrid->Rows->Add(gcnew array<System::String^> { nome, email, fone });
        }
    }

    System::Void TelaListaNotificacao::addBtn_Click(System::Object^ sender, System::EventArgs^  e) {
        TelaNotificacao^ telaNotificacao = gcnew TelaNotificacao();
        telaNotificacao->ShowDialog();
    }

    System::Void TelaListaNotificacao::notificationsGrid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
        System::Windows::Forms::MessageBox::Show(this->notificationsGrid->Rows[e->RowIndex]->Cells[0]->Value->ToString());

    }

}
