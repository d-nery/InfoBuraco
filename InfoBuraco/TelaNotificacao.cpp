#include <msclr/marshal_cppstd.h>
#include <map>
#include <string>

#include "TelaNotificacao.h"
#include "CidadaoController.h"
#include "BuracoController.h"

namespace InfoBuraco {
    System::Void TelaNotificacao::findCitizenBtn_Click(System::Object^  sender, System::EventArgs^  e) {
        ctzEmail_lb->ForeColor = System::Drawing::Color::Black;

        if (this->ctzEmail_txt == String::Empty) {
            ctzEmail_lb->ForeColor = System::Drawing::Color::Red;
            MessageBox::Show("Preencha o Email");
            return;
        }

        CidadaoController cidCtrl;
        std::string email = msclr::interop::marshal_as<std::string>(this->ctzEmail_txt);

        Cidadao* cidadao = cidCtrl.buscarCidadao(email);

        if (cidadao == nullptr) {
            MessageBox::Show("Cidadao nao encontrado");
            return;
        }

        MessageBox::Show("Cidadao Encontrado");
        this->citizenTelephone_tb->Text = msclr::interop::marshal_as<System::String^>(cidadao->getTelefone());
        this->ctzName_txt = msclr::interop::marshal_as<System::String^>(cidadao->getNome());
        this->ctzFacebook_txt = msclr::interop::marshal_as<System::String^>(cidadao->getFacebook());
    }

    System::Void TelaNotificacao::createCitizenBtn_Click(System::Object^  sender, System::EventArgs^  e) {
        bool error = false;

        ctzName_lb->ForeColor = System::Drawing::Color::Black;
        ctzPhone_lb->ForeColor = System::Drawing::Color::Black;
        ctzEmail_lb->ForeColor = System::Drawing::Color::Black;

        if (this->ctzName_txt == String::Empty) {
            ctzName_lb->ForeColor = System::Drawing::Color::Red;
            error = true;
        }

        if (this->ctzPhone_txt == String::Empty) {
            ctzPhone_lb->ForeColor = System::Drawing::Color::Red;
            error = true;
        }

        if (this->ctzEmail_txt == String::Empty) {
            ctzEmail_lb->ForeColor = System::Drawing::Color::Red;
            error = true;
        }

        if (error) {
            MessageBox::Show("Preencha os campos destacados");
            return;
        }

        CidadaoController cidCtrl;

        std::map<std::string, std::string> data;
        data["nome"] = msclr::interop::marshal_as<std::string>(this->ctzName_txt);
        data["email"] = msclr::interop::marshal_as<std::string>(this->ctzEmail_txt);
        data["telefone"] = msclr::interop::marshal_as<std::string>(this->ctzPhone_txt);

        cidCtrl.criarCidadao(data);
    }

    System::Void TelaNotificacao::findHoleBtn_Click(System::Object^  sender, System::EventArgs^  e) {
        buracoLocalizacao_lb->ForeColor = System::Drawing::Color::Black;

        if (this->buracoLocalizacao_txt == String::Empty) {
            buracoLocalizacao_lb->ForeColor = System::Drawing::Color::Red;
            MessageBox::Show("Preencha a Localização!");
            return;
        }

        BuracoController holeCtrl;
        std::string localizacao = msclr::interop::marshal_as<std::string>(this->buracoLocalizacao_txt);
        std::string regional = msclr::interop::marshal_as<std::string>(this->buracoRegional_txt);

        Buraco* buraco = holeCtrl.buscarBuraco(localizacao, regional);

        if (buraco == nullptr) {
            MessageBox::Show("Buraco nao encontrado");
            return;
        }

        MessageBox::Show("Buraco Encontrado");
        this->buracoPosicao_nup->Value = buraco->getPosicao();
        this->buracoTamanho_nup->Value = buraco->getTamanho();
    }
}
