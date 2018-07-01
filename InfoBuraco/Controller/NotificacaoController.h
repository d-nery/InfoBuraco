#pragma once

#include <map>
#include <string>

#include "Notificacao.h"
#include "Buraco.h"
#include "Cidadao.h"
#include "Usuario.h"

namespace InfoBuraco {
    class Notificacao;

    class NotificacaoController {
    public:
        NotificacaoController();
        virtual ~NotificacaoController();

        Notificacao* buscarNotificacao(int id);
        // std::vector<Notificacao*>* getAll();
        Notificacao* criarNotificacao(std::string reclamacao, boost::posix_time::ptime data, Cidadao* reclamador, Buraco* buraco, Usuario* registrador);
    };
}
