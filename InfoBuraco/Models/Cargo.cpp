#include "Cargo.h"

namespace InfoBuraco {
    Cargo::Cargo() {}

    Cargo::~Cargo() {}

    std::string Cargo::getName() {
        return this->name;
    }

    int Cargo::getId() {
        return this->id;
    }

    uint16_t Cargo::getPermissionMask() {
        return this->permission_mask;
    }
}
