#include "OS.h"

namespace InfoBuraco {
    OS::OS() {}

    OS::~OS() {}

    int OS::getPrioridade() {
        return this->prioridade;
    }

    bool OS::getStatus() {
        return this->status;
    }

    int OS::getEstimativaPessoal() {
        return this->estimativa_pessoal;
    }

    int OS::getEstimativaEquipamento() {
        return this->estimativa_equipamento;
    }

    int OS::getEstimativaMaterial() {
        return this->estimativa_material;
    }

    int OS::getEstimativaTotal() {
        return getEstimativaEquipamento() + getEstimativaMaterial() + getEstimativaPessoal();
    }

    Buraco* OS::getBuraco() {
        return this->buraco;
    }
}
