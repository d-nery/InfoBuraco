#include <vector>

#include "OSController.h"
#include "OS.h"
#include "OSDAO.h"

namespace InfoBuraco {
    OSController::OSController() {}

    OS* OSController::buscarOS(int id) {
        OS* os = nullptr;
        OSDAO osDAO;

        os = osDAO.getOS(id);

        return os;
    }

    std::vector<OS*>* OSController::getAll() {
        std::vector<OS*>* oses = nullptr;
        OSDAO osDAO;

        oses = osDAO.getAll();

        return oses;
    }


    OS* OSController::criarOS(Buraco* buraco) {
        OS* os = nullptr;
        OSDAO osDAO;

        // Cria
        os = new OS();

        os->buraco = buraco;
        os->prioridade = 10 - buraco->getTamanho(); // Prioridade depende do tamanho do buraco
        os->status = OS::PARADA;

        os->estimativa_pessoal = buraco->getTamanho();
        os->estimativa_equipamento = buraco->getTamanho();
        os->estimativa_material = buraco->getTamanho();

        os->id_os = osDAO.insertOS(os);

        return os;
    }

    OSController::~OSController() {}
}
