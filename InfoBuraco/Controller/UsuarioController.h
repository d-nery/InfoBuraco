#pragma once

#include <map>
#include <string>

#include "Equipamento.h"
#include "Buraco.h"
#include "Cidadao.h"
#include "Usuario.h"

namespace InfoBuraco {
	class Usuario;

	class UsuarioController {
	public:
		UsuarioController();
		virtual ~UsuarioController();

		Usuario* buscarUsuario(std::string login, std::string password = "");
		std::vector<Usuario*>* getAll();
		Usuario* criarUsuario(std::string nome, std::string login, std::string password = "");
	};
}
