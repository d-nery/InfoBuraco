#include "Despacho.h"

namespace InfoBuraco {
    Despacho::Despacho() {}

    Despacho::~Despacho() {}

    int Despacho::getId() {
        return this->id_despacho;
    }

    boost::posix_time::ptime Despacho::getDataDespacho() {
        return this->data_despacho;
    }

    int Despacho::getDuracaoConserto() {
        return this->duracao_conserto;
    }

    int Despacho::getDuracaoDeslocamento() {
        return this->duracao_deslocamento;
    }

    int Despacho::getCustoDeslocamento() {
        return this->custo_deslocamento;
    }

    int Despacho::getCustoConserto() {
        return this->custo_conserto;
    }

    std::vector<Material*> Despacho::getMateriais() {
        return this->materiais;
    }

    std::vector<Equipamento*> Despacho::getEquipamentos() {
        return this->equipamentos;
    }
}
