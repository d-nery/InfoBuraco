#include "DetalheOS.h"


namespace InfoBuraco {

	System::Void DetalheOS::cancelBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		DetalheOS^ detalhaOS = gcnew DetalheOS();

		//this->Visible = false;
		this->Close();

	}

	System::Void DetalheOS::statusCb_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	}
}