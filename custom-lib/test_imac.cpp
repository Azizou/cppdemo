#define CATCH_CONFIG_MAIN
#include "imac.h"
#include "catch.hpp"

SCENARIO("imac fib","[fib]"){
    REQUIRE(myFib(1)==myFib(0));
    REQUIRE(myFib(2)==2);
    REQUIRE(myFib(6)==13);
    
}
