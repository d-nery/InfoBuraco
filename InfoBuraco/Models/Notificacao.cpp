#include "Notificacao.h"

namespace InfoBuraco {
    Notificacao::Notificacao() {}

    int Notificacao::get_id_notificacao() {
        return this->id_notificacao;
    }

    boost::posix_time::ptime Notificacao::get_data_notificacao() {
        return this->data_notificacao;
    }

    boost::posix_time::ptime Notificacao::get_data_resposta() {
        return this->data_resposta;
    }

    std::string Notificacao::get_reclamacao() {
        return this->reclamacao;
    }

    std::string Notificacao::get_resposta() {
        return this->resposta;
    }

    Cidadao* Notificacao::getCidadao() {
        return this->cidadao;
    }


    Notificacao::~Notificacao() {}
}
