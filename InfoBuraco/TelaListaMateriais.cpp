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

        for (auto material : *materiais) {
            System::Diagnostics::Debug::Print("Adicionando Material");
            String^ patrimonio = conv_sysstring(material->getNome());
			String^ unidade = conv_sysstring(material->getUnidade());
            String^ custo = conv_sysstring(std::to_string(material->getCusto()));
			String^ quantidade = conv_sysstring(std::to_string(material->getQuantidade()));
            this->materiaisGrid->Rows->Add(gcnew array<System::String^> { patrimonio, unidade, custo, quantidade });
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
