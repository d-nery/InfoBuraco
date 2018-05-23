#pragma once

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <iostream>

namespace InfoBuraco {
    class MySQL {
    public:
        MySQL();
        virtual ~MySQL();
        sql::Connection* getConnection();

    private:
        sql::Driver* driver;
        sql::Connection* conn;
        std::string url;
        std::string user;
        std::string pass;
    };
}

extern InfoBuraco::MySQL mySQL;
