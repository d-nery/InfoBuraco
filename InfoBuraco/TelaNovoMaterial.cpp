#include "TelaNovoMaterial.h"
#include "MaterialController.h"
#include <string>
#include <msclr/marshal_cppstd.h>

#define conv_string(x) (msclr::interop::marshal_as<std::string>(x))

namespace InfoBuraco {

	System::Void TelaNovoMaterial::okBtn_Click(System::Object^ sender, System::EventArgs^  e) {

		MaterialController matCtrl;

		Material* material = matCtrl.criarMaterial(conv_string(this->patrimonio_txt), conv_string(this->unidade_txt), Convert::ToDouble(this->custo_txt), Convert::ToInt32(this->quantidade_txt));

		System::Diagnostics::Debug::Print("Material Criado!");
		System::Windows::Forms::MessageBox::Show("Material registrado com sucesso.");
		this->Close();
	}

	System::Void TelaNovoMaterial::cancelBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
	}

}