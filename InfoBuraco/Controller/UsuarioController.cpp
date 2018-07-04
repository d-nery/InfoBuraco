#include "UsuarioController.h"
#include "UsuarioDAO.h"

namespace InfoBuraco {
	UsuarioController::UsuarioController() {}

	UsuarioController::~UsuarioController() {}

	Usuario* UsuarioController::buscarUsuario(std::string login, std::string password = "") {
		Usuario* usuario = nullptr;
		UsuarioDAO usuarioDAO;

		usuario = usuarioDAO.getUser(login, password);

		return usuario;
	}

	std::vector<Usuario*>* UsuarioController::getAll() {
		std::vector<Usuario*>* usuarios = nullptr;
		UsuarioDAO usuarioDAO;

		usuarios = usuarioDAO.getAll();

		return usuarios;
	}

	Usuario* UsuarioController::criarUsuario(std::string nome, std::string login, std::string password = "") {
		Usuario* usuario = nullptr;
		UsuarioDAO usuarioDAO;

		// Cria
		usuario = usuarioDAO.getUser(nome);

		if (usuario != nullptr) {
			System::Diagnostics::Debug::Print("Tentando criar usuario ja existente!");
			return nullptr;
		}

		usuario = new Usuario();

		usuario->setName = nome;
		usuario->setLogin = login;
		usuario->setPassword = password;
		//usuario->despacho = nullptr;

		usuarioDAO.insertUsuario(usuario);

		return usuario;
	}
}
