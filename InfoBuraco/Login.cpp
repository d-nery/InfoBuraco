#include "Login.h"
#include "Dashboard.h"

namespace InfoBuraco {
	System::Void Login::login_bnt_Click(System::Object^  sender, System::EventArgs^  e) {
		user_lb->ForeColor = System::Drawing::Color::Black;
		pass_lb->ForeColor = System::Drawing::Color::Black;
		
		if ((this->user_tb->Text == String::Empty) && (this->pass_tb->Text == String::Empty)) {
			user_lb->ForeColor = System::Drawing::Color::Red;
			pass_lb->ForeColor = System::Drawing::Color::Red;
			MessageBox::Show("Preencha o login e senha!");
		}
		else if (this->user_tb->Text == String::Empty) {
			user_lb->ForeColor = System::Drawing::Color::Red;
			MessageBox::Show("Preencha o login!");
		}
		else if (this->pass_tb->Text == String::Empty) {
			pass_lb->ForeColor = System::Drawing::Color::Red;
			MessageBox::Show("Preencha a senha!");
		}
		else {
			Dashboard^ dash = gcnew Dashboard(this->user_tb->Text, L"Despachador", this);
			dash->Visible = true;
			this->Visible = false;
		}
	}

	System::Void Login::cancel_btn_click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
}