#pragma once

#include <string>
#include <vector>

#include "Notificacao.h"

namespace InfoBuraco {
    class Notificacao;

    class NotificacaoDAO {
    public:
        NotificacaoDAO();
        virtual ~NotificacaoDAO();

        Notificacao* getNotificacao(int id);
        std::vector<Notificacao*>* getAll();
        int insertNotificacao(Notificacao* notificacao);

    private:
        int getLastId();
    };
}
