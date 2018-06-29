#include <msclr/marshal_cppstd.h>
#include <stdexcept>

#include "MySQL.h"

namespace InfoBuraco {
    static bool mysql_instanced = false;

    MySQL::MySQL() {
        if (mysql_instanced == true)
            throw std::runtime_error("MySQL already instanced! Use mySQL global instance");

        mysql_instanced = true;

        //this->url = "tcp://143.107.102.55:3306/db04";
        //this->user = "grupo04";
        //this->pass = "grupo04";

        this->url = "tcp://labsoft.ccbpqdxlsfij.us-east-2.rds.amazonaws.com:3306/db04";
        this->user = "dnery";
        this->pass = "grupo004";

        try {
            this->driver = get_driver_instance();
            this->conn = this->driver->connect(url.data(), user.data(), pass.data());
        } catch (sql::SQLException& e) {
            System::Diagnostics::Debug::Print(msclr::interop::marshal_as<System::String^>(e.what()));
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
