#pragma once

#include <string>
#include <vector>

#include "Buraco.h"

namespace InfoBuraco {
    class Buraco;

    class BuracoDAO {
    public:
        BuracoDAO();
        virtual ~BuracoDAO();

        Buraco* getBuraco(int id);
        int insertBuraco(Buraco* buraco);
    };
}
