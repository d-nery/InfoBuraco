#include "MySQL.h"

#include <stdexcept>

namespace InfoBuraco {
    static bool mysql_instanced = false;

    MySQL::MySQL() {
        if (mysql_instanced == true)
            throw std::runtime_error("MySQL already instanced! Use mySQL global instance");

        mysql_instanced = true;

        std::string log = "";

        this->url = "tcp://143.107.102.55:3306/db04";
        this->user = "grupo04";
        this->pass = "grupo04";


        try {
            this->driver = get_driver_instance();
            this->conn = this->driver->connect(url.data(), user.data(), pass.data());
        } catch (sql::SQLException& e) {
            log = e.what();
        }
    }

    sql::Connection* MySQL::getConnection() {
        return conn;
    }

    MySQL::~MySQL() {
        delete conn;
    }
}

InfoBuraco::MySQL mySQL;