#pragma once

#include <string>

#include "boost/date_time.hpp"

#include "NotificacaoController.h"
#include "NotificacaoDAO.h"
#include "Usuario.h"
#include "Cidadao.h"
#include "Buraco.h"

namespace InfoBuraco {
    class Notificacao {
        friend class NotificacaoDAO;
        friend class NotificacaoController;

    public:
        Notificacao();
        virtual ~Notificacao();

        int get_id_notificacao();
        boost::posix_time::ptime get_data_notificacao();
        boost::posix_time::ptime get_data_resposta();
        std::string get_reclamacao();
        std::string get_resposta();

    private:
        int id_notificacao;
        boost::posix_time::ptime data_notificacao;
        boost::posix_time::ptime data_resposta;
        std::string reclamacao;
        std::string resposta;

        // Foreign Keys
        Buraco* buraco;
        Cidadao* cidadao;
        Usuario* usuario_registro;
        Usuario* usuario_resposta;
    };
} // InfoBuraco
