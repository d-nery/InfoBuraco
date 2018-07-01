#include <vector>

#include "NotificacaoController.h"
#include "Notificacao.h"
#include "NotificacaoDAO.h"

namespace InfoBuraco {
    NotificacaoController::NotificacaoController() {}

    Notificacao* NotificacaoController::buscarNotificacao(int id) {
        Notificacao* notificacao = nullptr;
        NotificacaoDAO notificacaoDAO;

        notificacao = notificacaoDAO.getNotificacao(id);

        return notificacao;
    }

    std::vector<Notificacao*>* NotificacaoController::getAll() {
        std::vector<Notificacao*>* notificacoes = nullptr;
        NotificacaoDAO notificacaoDAO;

        notificacoes = notificacaoDAO.getAll();

        return notificacoes;
    }


    Notificacao* NotificacaoController::criarNotificacao(std::string reclamacao, boost::posix_time::ptime data, Cidadao* reclamador, Buraco* buraco, Usuario* registrador) {
        Notificacao* notificacao = nullptr;
        NotificacaoDAO notificacaoDAO;

        // Cria
        notificacao = new Notificacao();

        notificacao->reclamacao = reclamacao;
        notificacao->data_notificacao = data;
        notificacao->buraco = buraco;
        notificacao->cidadao = reclamador;
        notificacao->usuario_registro = registrador;

        notificacao->id_notificacao = notificacaoDAO.insertNotificacao(notificacao);

        return notificacao;
    }

    NotificacaoController::~NotificacaoController() {}
}
