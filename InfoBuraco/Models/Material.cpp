#include "Material.h"

namespace InfoBuraco {
	Material::Material() {}

	Material::~Material() {}

	std::string Material::getNome() {
		return this->nome;
	}

	std::string Material::getUnidade() {
		return this->unidade;
	}

	double Material::getCusto() {
		return this->custo;
	}

	int Material::getQuantidade() {
		return this->quantidade;
	}

}
