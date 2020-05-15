#include "antraste_vector.h"
#include "antraste_list.h"
#include "antraste_deque.h"
#include "antraste.h"
#include "Timer.h"

#define CATCH_CONFIG_MAIN
#include"catch.hpp"


TEST_CASE("mediana") 
{
    std::vector<int> v1{1,2,3,4,5}, v2{19,25,38,49}, v3{0,10,20};

	REQUIRE(rastimediana(v1) == 3);
    REQUIRE(rastimediana(v2) == 31.5);
    REQUIRE(rastimediana(v3) == 10);
}

TEST_CASE("pirmo vardas > antro vardas") 
{
     Studentas1 s1, s2, s3;
     s1.setName("Alyvuoge");
     s2.setName("Suris");
     s3.setName("Durpes");

    REQUIRE(rikiuojam(s1, s2) == true);
    REQUIRE(rikiuojam(s1, s3) == true);
    REQUIRE(rikiuojam(s2, s3) == false);

}