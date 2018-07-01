#pragma once

#include "Buraco.h"

namespace InfoBuraco {
    class Buraco;

    class BuracoDAO {
    public:
        BuracoDAO();
        virtual ~BuracoDAO();

        Buraco* getBuraco(int id);
        Buraco* getBuraco(std::string localizcao, std::string regional);
        int insertBuraco(Buraco* buraco);
        void updateBuraco(Buraco* buraco);

    private:
        int getLastId();
    };
}
