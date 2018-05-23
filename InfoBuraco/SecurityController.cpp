#include "SecurityController.h"
#include "Usuario.h"
#include "UsuarioDAO.h"

namespace InfoBuraco {
    SecurityController::SecurityController() {
    }

    Usuario* SecurityController::login(std::string login, std::string pass) {
        Usuario* usuario = nullptr;
        UsuarioDAO usuarioDAO;

        usuario = usuarioDAO.getUser(login, pass);

        return usuario;
    }

    SecurityController::~SecurityController() {
    }
}