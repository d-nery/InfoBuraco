#include "Dashboard.h"

System::Void InfoBuraco::Dashboard::button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->original_login->Visible = true;
	delete this;
}