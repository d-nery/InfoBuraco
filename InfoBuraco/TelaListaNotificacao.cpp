#include <msclr/marshal_cppstd.h>
#include <vector>

#include "boost/date_time.hpp"
#include "TelaListaNotificacao.h"
#include "TelaNotificacao.h"
#include "Notificacao.h"
#include "NotificacaoController.h"

#define conv_sysstring(x) msclr::interop::marshal_as<System::String^>(x)

namespace InfoBuraco {

    System::Void TelaListaNotificacao::load(System::Object^ sender, System::EventArgs^  e) {
        NotificacaoController notificacaoCtrl;

        std::vector<Notificacao*>* notificacoes = notificacaoCtrl.getAll();

        for (auto notif : *notificacoes) {
            String^ data = conv_sysstring(boost::posix_time::to_simple_string(notif->get_data_notificacao()));
            String^ cid = conv_sysstring(notif->getCidadao()->getNome());
            String^ reclamacao = conv_sysstring(notif->get_reclamacao());
            String^ respondida = notif->get_resposta().empty() ? "Não" : "Sim";
            this->notificationsGrid->Rows->Add(gcnew array<System::String^> { data, cid, reclamacao, respondida });
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
