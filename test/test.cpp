//
// test.cpp
// author: Marek Foltýn (marek@foltynovi.cz)
// created: 2017-10-20
//

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "ShereCli.h"

using std::string;

TEST_CASE("Command line no options")
{
    SECTION("No options")
    {
        string args = "";
        int argc;
        char ** argv;


        ShereCli app;
        int result = app.run()
    }
}