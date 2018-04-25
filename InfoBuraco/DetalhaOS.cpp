#include "DetalhaOS.h"

namespace InfoBuraco {

	System::Void DetalhaOS::cancelBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		DetalhaOS^ detalhaOS = gcnew DetalhaOS();

		//this->Visible = false;
		this->Close();

	}

	System::Void DetalhaOS::statusCb_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		
	}
}