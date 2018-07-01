#pragma once

#include <string>

#include "Notificacao.h"

namespace InfoBuraco {
    class Notificacao;

    class NotificacaoDAO {
    public:
        NotificacaoDAO();
        virtual ~NotificacaoDAO();

        Notificacao* getNotificacao(int id);
        int insertNotificacao(Notificacao* notificacao);

    private:
        int getLastId();
    };
}
