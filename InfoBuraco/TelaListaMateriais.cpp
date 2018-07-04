#include <msclr/marshal_cppstd.h>
#include <sstream>

#include "TelaListaMateriais.h"
#include "TelaNovoMaterial.h"
#include "Material.h"
#include "MaterialController.h"

#define conv_sysstring(x) msclr::interop::marshal_as<System::String^>(x)

namespace InfoBuraco {
    System::Void TelaListaMateriais::load(System::Object^ sender, System::EventArgs^  e) {
        System::Diagnostics::Debug::Print("TelaListaMateriais Load");

        MaterialController materialCtrl;

        std::vector<Material*>* materiais = materialCtrl.getAll();

        for (auto mateirial : *materiais) {
            System::Diagnostics::Debug::Print("Adicionando Material");
            String^ patrimonio = conv_sysstring(equip->getNome());
            String^ custo = conv_sysstring(std::to_string(equip->getCusto()));
            //bool alocado = (buraco->getDespacho() != nullptr);
            this->materiaisGrid->Rows->Add(gcnew array<System::String^> { patrimonio, custo });
        }
    }

    System::Void TelaListaMateriais::addBtn_Click(System::Object^ sender, System::EventArgs^  e) {
        TelaNovoMaterial^ telaNovoMaterial = gcnew TelaNovoMaterial(this->usuario_logado);
        telaNovoMaterial->ShowDialog();
    }

    System::Void TelaListaMateriais::closeBtn_Click(System::Object^  sender, System::EventArgs^  e) {
        this->Visible = false;
    }

}
