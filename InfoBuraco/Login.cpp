#include <msclr/marshal_cppstd.h>

#include "Login.h"
#include "Dashboard.h"
#include "SecurityController.h"
#include "Usuario.h"

namespace InfoBuraco {
    System::Void Login::login_bnt_Click(System::Object^ sender, System::EventArgs^ e) {
        user_lb->ForeColor = System::Drawing::Color::Black;
        pass_lb->ForeColor = System::Drawing::Color::Black;
        
        if ((this->login_txt == String::Empty) && (this->pass_txt == String::Empty)) {
            user_lb->ForeColor = System::Drawing::Color::Red;
            pass_lb->ForeColor = System::Drawing::Color::Red;
            MessageBox::Show("Preencha o login e senha!");
        } else if (this->login_txt == String::Empty) {
            user_lb->ForeColor = System::Drawing::Color::Red;
            MessageBox::Show("Preencha o login!");
        } else if (this->pass_txt == String::Empty) {
            pass_lb->ForeColor = System::Drawing::Color::Red;
            MessageBox::Show("Preencha a senha!");
        } else {
            SecurityController secCtrl;

            std::string login = msclr::interop::marshal_as<std::string>(this->login_txt);
            std::string pass = msclr::interop::marshal_as<std::string>(this->pass_txt);

            Usuario* usuario = secCtrl.login(login, pass);

            if (usuario != nullptr) {
                Dashboard^ dash = gcnew Dashboard(this->login_txt, L"Despachador", this);
                dash->Visible = true;
                this->Visible = false;
            } else {
                MessageBox::Show("Usuario ou senha invalidos!");
            }
        }
    }

    System::Void Login::cancel_btn_click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();
    }
}