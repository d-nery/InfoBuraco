#pragma once

#include <string>
#include <vector>

#include "Material.h"

namespace InfoBuraco {
	class Material;

	class MaterialDAO {
	public:
		MaterialDAO();
		virtual ~MaterialDAO();

		Material* getMaterial(std::string name);
		std::vector<Material*>* getAll();
		void insertMaterial(Material* Material);
	};
}