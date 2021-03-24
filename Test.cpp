  
#include "doctest.h"
#include "snowman.hpp"
#include <string>
#include <algorithm>
using namespace std;
using namespace ariel;
TEST_CASE("Working Snowman"){
    CHECK(snowman(12134431) == 0);
    CHECK(snowman(24114422) == 0);
    CHECK(snowman(11223344) == 0);
    CHECK(snowman(23414321) == 0);
    CHECK(snowman(13211131) == 0);
    CHECK(snowman(14443344) == 0);
    CHECK(snowman(11114321) == 0);
    CHECK(snowman(13334231) == 0);
}
TEST_CASE("Not Integers"){
    CHECK_THROWS(snowman(311+2311));
    CHECK_THROWS(snowman(3113-213));
    CHECK_THROWS(snowman(222+4221));
    CHECK_THROWS(snowman(433+2222));
    CHECK_THROWS(snowman(12+33311));
    CHECK_THROWS(snowman(1111+334)); 
    CHECK_THROWS(snowman(33+33321));
    CHECK_THROWS(snowman(4-222232));
    CHECK_THROWS(snowman(1-222211));
    CHECK_THROWS(snowman(3-241324));  
}
TEST_CASE("More Than 8 Digits"){
    CHECK_THROWS(snowman(121342321));
    CHECK_THROWS(snowman(124321441));
    CHECK_THROWS(snowman(123421434));
    CHECK_THROWS(snowman(123421243));
    CHECK_THROWS(snowman(113414342));
}
TEST_CASE("Less Than 8 Digits"){
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(21));
    CHECK_THROWS(snowman(321));
    CHECK_THROWS(snowman(3211));
    CHECK_THROWS(snowman(32132));
    CHECK_THROWS(snowman(123233));
    CHECK_THROWS(snowman(1111111));
}
TEST_CASE("Has Bigger Value the 4"){
    CHECK_THROWS(snowman(64564566));
    CHECK_THROWS(snowman(46645665));
    CHECK_THROWS(snowman(24325788));
    CHECK_THROWS(snowman(98767867));
    CHECK_THROWS(snowman(74576574));
    CHECK_THROWS(snowman(84856867));
    CHECK_THROWS(snowman(85637766));
}
TEST_CASE("Has Smaller Value the 1"){
    CHECK_THROWS(snowman(03030303));
    CHECK_THROWS(snowman(02020202));
    CHECK_THROWS(snowman(01010101));
    CHECK_THROWS(snowman(-21223011));
    CHECK_THROWS(snowman(04040404));
}