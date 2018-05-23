#include <msclr/marshal_cppstd.h>
#include <sstream>

#include "TelaEquipamento.h"
#include "Equipamento.h"
#include "EquipamentoDAO.h"

namespace InfoBuraco {
    System::Void TelaEquipamento::getId_btn_Click(System::Object^ sender, System::EventArgs^ e) {
        Equipamento* equip = nullptr;
        EquipamentoDAO equipDAO;

        std::string name = msclr::interop::marshal_as<std::string>(this->nome_tb->Text);

        equip = equipDAO.getEquipment(name);

        if (equip == nullptr) {
            MessageBox::Show("Equipamento nao encontrado");
        } else {
            std::stringstream npat;
            npat << "Numero do patrimonio: " << equip->getNumeroPatrimonio();
            MessageBox::Show(msclr::interop::marshal_as<String^>(npat.str()));
        }
    }
}