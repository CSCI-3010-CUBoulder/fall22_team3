#define CATCH_CONFIG_MAIN
#include "functions_to_implement.cpp"
#include <iostream>
#include <vector>
#include "catch2.hpp" // downloaded from GitHub repo linked above

TEST_CASE ("test")
{
    REQUIRE(0 == 0);
}

// TEST_CASE( "Factorials are computed", "[factorial"){
//     REQUIRE( Factorial(0)==0);
//     REQUIRE( Factorial(1)==1);
//     REQUIRE( Factorial(2)==2);
//     REQUIRE( Factorial(3)==6);
//     REQUIRE( Factorial(10)== 3628800);
// }

// TEST_CASE("incrementing values in integer vector", "[addN]"){
//     vector<int> v{1,2,3,5,6,7,8,10};

//     SECTION("checking with +ve n"){
//         int n=5;
//         vector<int> res = AddN(v,n);;
//         srand(time(NULL));
//         int random = rand()%v.size();
//         REQUIRE(v.size()==res.size);
//         REQUIRE( res[0] == 6);
//         REQUIRE
//     }
// }