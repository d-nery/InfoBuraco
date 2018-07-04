#pragma once

#include <string>


#include "MaterialDAO.h"
#include "MaterialController.h"

namespace InfoBuraco {
	class Material {
		friend class MaterialDAO;
		friend class MaterialController;

	public:
		Material();
		virtual ~Material();

		std::string getNome();
		std::string getUnidade();
		double getCusto();
		int getQuantidade();

	private:
		std::string nome;
		std::string unidade;
		double custo;
		int quantidade;

	};
}
