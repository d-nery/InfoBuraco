#pragma once

#include <map>
#include <string>

#include "Material.h"
#include "Buraco.h"
#include "Cidadao.h"
#include "Usuario.h"

namespace InfoBuraco {
	class Material;

	class MaterialController {
	public:
		MaterialController();
		virtual ~MaterialController();

		Material* buscarMaterial(std::string nome);
		std::vector<Material*>* getAll();
		Material* criarMaterial(std::string nome, std::string unidade, double custo, int quantidade);
	};
}
