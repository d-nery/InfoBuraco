#pragma once

#include <string>

#include "Notificacao.h"

namespace InfoBuraco {
    class NotificacaoDAO {
    public:
        NotificacaoDAO();
        virtual ~NotificacaoDAO();

        Notificacao* getNotificacao(int id);
    };
}
