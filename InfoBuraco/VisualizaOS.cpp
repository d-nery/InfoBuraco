#include "VisualizaOS.h"
#include "DetalhaOS.h"

namespace InfoBuraco {
	System::Void VisualizaOS::edit_OS(System::Object^  sender, System::EventArgs^  e) {
		DetalhaOS^ detalhaOS = gcnew DetalhaOS();

		detalhaOS->ShowDialog();

	}
}