#include "TelaNovoEquipamento.h"
#include "EquipamentoController.h"
#include <string>
#include <msclr/marshal_cppstd.h>

#define conv_string(x) (msclr::interop::marshal_as<std::string>(x))

namespace InfoBuraco {

	System::Void TelaNovoEquipamento::okBtn_Click(System::Object^ sender, System::EventArgs^  e) {

		EquipamentoController equipCtrl;

		Equipamento* equipamento = equipCtrl.criarEquipamento(conv_string(this->patrimonio_txt), Convert::ToDouble(this->custo_txt));

		System::Diagnostics::Debug::Print("Equipamento Criado!");
		System::Windows::Forms::MessageBox::Show("Equipamento registrado com sucesso.");
		this->Close();
	}

	System::Void TelaNovoEquipamento::cancelBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
	}

}