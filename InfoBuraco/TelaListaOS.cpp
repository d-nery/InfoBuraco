#include <msclr/marshal_cppstd.h>
#include <sstream>

#include "TelaListaOS.h"
#include "TelaNovoMaterial.h"
#include "Material.h"
#include "OSController.h"

#define conv_sysstring(x) msclr::interop::marshal_as<System::String^>(x)

namespace InfoBuraco {
    System::Void TelaListaOS::load(System::Object^ sender, System::EventArgs^  e) {
        System::Diagnostics::Debug::Print("TelaListaOS Load");

        OSController osCtrl;

        std::vector<OS*>* oses = osCtrl.getAll();

        for (auto os : *oses) {
            System::Diagnostics::Debug::Print("Adicionando Material");
            String^ id = conv_sysstring(std::to_string(os->getId()));
            String^ prioridade = conv_sysstring(std::to_string(os->getPrioridade()));
            String^ custo = conv_sysstring(std::to_string(os->getEstimativaTotal()));
			String^ estado = conv_sysstring(std::to_string(os->getStatus()));
            this->osGrid->Rows->Add(gcnew array<System::String^> { id, prioridade, custo, estado });
        }
    }

    System::Void TelaListaOS::closeBtn_Click(System::Object^  sender, System::EventArgs^  e) {
        this->Visible = false;
    }

}
