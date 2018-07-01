#include <msclr/marshal_cppstd.h>
#include <map>
#include <string>

#include "boost/date_time.hpp"
#include "TelaNotificacao.h"
#include "CidadaoController.h"
#include "BuracoController.h"
#include "NotificacaoController.h"
#include "UsuarioDAO.h"

#define conv_string(x) (msclr::interop::marshal_as<std::string>(x))

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

    System::Void TelaNotificacao::findHoleBtn_Click(System::Object^  sender, System::EventArgs^  e) {
        buracoLocalizacao_lb->ForeColor = System::Drawing::Color::Black;

        if (this->buracoLocalizacao_txt == String::Empty) {
            buracoLocalizacao_lb->ForeColor = System::Drawing::Color::Red;
            MessageBox::Show("Preencha a Localização!");
            return;
        }

        BuracoController holeCtrl;
        std::string localizacao = conv_string(this->buracoLocalizacao_txt);
        std::string regional = conv_string(this->buracoRegional_txt);

        Buraco* buraco = holeCtrl.buscarBuraco(localizacao, regional);

        if (buraco == nullptr) {
            MessageBox::Show("Buraco nao encontrado");
            return;
        }

        MessageBox::Show("Buraco Encontrado");
        this->buracoPosicao_nup->Value = buraco->getPosicao();
        this->buracoTamanho_nup->Value = buraco->getTamanho();
    }

    System::Void TelaNotificacao::createNotificationBtn_Click(System::Object^  sender, System::EventArgs^  e) {
        System::Diagnostics::Debug::Print("Criar Notificacao Criado");
        
        ctzName_lb->ForeColor  = ctzName_txt  == String::Empty ? System::Drawing::Color::Red : System::Drawing::Color::Black;
        ctzPhone_lb->ForeColor = ctzPhone_txt == String::Empty ? System::Drawing::Color::Red : System::Drawing::Color::Black;
        ctzEmail_lb->ForeColor = ctzEmail_txt == String::Empty ? System::Drawing::Color::Red : System::Drawing::Color::Black;

        notReclamacao_lb->ForeColor = notificationReclamacao_txt == String::Empty ? System::Drawing::Color::Red : System::Drawing::Color::Black;

        buracoLocalizacao_lb->ForeColor = buracoLocalizacao_txt == String::Empty ? System::Drawing::Color::Red : System::Drawing::Color::Black;
        buracoRegional_lb->ForeColor = buracoRegional_txt == String::Empty ? System::Drawing::Color::Red : System::Drawing::Color::Black;
        buracoPosicao_lb->ForeColor = buracoPosicao_nup->Value == 0 ? System::Drawing::Color::Red : System::Drawing::Color::Black;
        buracoTamanho_lb->ForeColor = buracoTamanho_nup->Value == 0 ? System::Drawing::Color::Red : System::Drawing::Color::Black;

        if (ctzName_txt == String::Empty || ctzPhone_txt == String::Empty || ctzEmail_txt == String::Empty ||
                notificationReclamacao_txt == String::Empty || buracoLocalizacao_txt == String::Empty || buracoRegional_txt == String::Empty ||
                buracoPosicao_nup->Value == 0 || buracoTamanho_nup->Value == 0) {
            MessageBox::Show("Preencha os campos destacados");
            return;
        }

        System::Diagnostics::Debug::Print("Inicializando Controladores");


        CidadaoController cidCtrl;
        BuracoController holeCtrl;
        NotificacaoController notCtrl;

        // Busca Cidadao
        Cidadao* cidadao = cidCtrl.buscarCidadao(conv_string(ctzEmail_txt));

        if (cidadao == nullptr) { // Não encontrado, criar
            System::Diagnostics::Debug::Print("Cidadao nao encontrado, criando");
            std::map<std::string, std::string> data;
            data["nome"] = conv_string(ctzName_txt);
            data["email"] = conv_string(ctzEmail_txt);
            data["telefone"] = conv_string(ctzPhone_txt);
            data["facebook"] = conv_string(ctzFacebook_txt);
            cidadao = cidCtrl.criarCidadao(data);
            System::Diagnostics::Debug::Print("Criado");
        } else {                  // Encontrado, atualizar
            System::Diagnostics::Debug::Print("Cidadao Encontrado");
            cidadao->setEmail(conv_string(ctzEmail_txt));
            cidadao->setNome(conv_string(ctzName_txt));
            cidadao->setTelefone(conv_string(ctzPhone_txt));
            cidadao->setFacebook(conv_string(ctzFacebook_txt));
            cidCtrl.atualizarCidadao(cidadao);
        }

        // Busca buraco
        Buraco* buraco = holeCtrl.buscarBuraco(conv_string(buracoLocalizacao_txt), conv_string(buracoRegional_txt));

        if (buraco == nullptr) {
            System::Diagnostics::Debug::Print("Buraco nao encontrado, criando");
            std::map<std::string, std::string> data;
            std::map<std::string, int> int_data;
            data["localizacao"] = conv_string(buracoLocalizacao_txt);
            data["regional"] = conv_string(buracoRegional_txt);
            int_data["tamanho"] = System::Decimal::ToInt32(buracoTamanho_nup->Value);
            int_data["posicao"] = System::Decimal::ToInt32(buracoPosicao_nup->Value);
            buraco = holeCtrl.criarBuraco(data, int_data);
            System::Diagnostics::Debug::Print("Criado");
        } else {
            System::Diagnostics::Debug::Print("Buraco encontrado");
            buraco->increaseNotifications();
            buraco->setTamanho(System::Decimal::ToInt32(buracoTamanho_nup->Value));
            buraco->setPosicao(System::Decimal::ToInt32(buracoPosicao_nup->Value));
            holeCtrl.atualizarBuraco(buraco);
        }

        // TODO pegar o atual
        UsuarioDAO usuarioDAO;
        Usuario* usuario = usuarioDAO.getUser("admin", "admin");

        // Criar notificacao
        boost::posix_time::ptime criacao = boost::posix_time::time_from_string(conv_string(notificationDateTime_dtp->Value.ToString("yyyy-MM-dd HH:mm")));

        Notificacao* notificacao = notCtrl.criarNotificacao(conv_string(notificationReclamacao_txt), criacao, cidadao, buraco, usuario);
        System::Diagnostics::Debug::Print("Notificação Criada!");
    }
}
