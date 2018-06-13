#include <msclr/marshal_cppstd.h>
#include <map>
#include <string>

#include "TelaNotificacao.h"
#include "CidadaoController.h"

namespace InfoBuraco {
    System::Void TelaNotificacao::findCitizenBtn_Click(System::Object^  sender, System::EventArgs^  e) {
        ctzName_lb->ForeColor = System::Drawing::Color::Black;

        if (this->ctzName_txt == String::Empty) {
            ctzName_lb->ForeColor = System::Drawing::Color::Red;
            MessageBox::Show("Preencha o Nome");
            return;
        }

        CidadaoController cidCtrl;
        std::string nome = msclr::interop::marshal_as<std::string>(this->ctzName_txt);

        Cidadao* cidadao = cidCtrl.buscarCidadao(nome);

        if (cidadao == nullptr) {
            MessageBox::Show("Cidadao nao encontrado");
            return;
        }

        MessageBox::Show("Cidadao Encontrado");
        this->citizenTelephone_tb->Text = msclr::interop::marshal_as<String^>(cidadao->getTelefone());
        this->ctzEmail_txt = msclr::interop::marshal_as<String^>(cidadao->getEmail());
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

        cidCtrl.buscarECriarCidadao(data);
    }
}