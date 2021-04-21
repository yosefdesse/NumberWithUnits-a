

#define CHECK DOCTEST_CHECK
#include "doctest.h"
using namespace doctest;
#include <iostream>
#include "NumberWithUnits.hpp"
using namespace ariel;

// 1 km = 1000 m
// 1 m = 100 cm
// 1 kg = 1000 g
// 1 ton = 1000 kg
// 1 hour = 60 min
// 1 min = 60 sec
// 1 USD = 3.33 ILS

TEST_CASE("units test")
{
    NumberWithUnits unit1(0.5, "km");
    NumberWithUnits unit2(500, "m");
    NumberWithUnits unit3=unit1+unit2;
    NumberWithUnits unit4=unit1-unit2;
    NumberWithUnits unit5(2, "ton");
    NumberWithUnits unit6(20, "sec");
    NumberWithUnits unit7(0.5, "km");
    NumberWithUnits unit8(55, "kg");
    NumberWithUnits unit9=unit6;
    
    CHECK(unit1 == unit2);
    CHECK(unit1 >= unit2);
    CHECK(unit1 >= unit2);
 
    CHECK(unit4 == unit6);
    CHECK(unit3 == unit6);
    CHECK(unit1 >= unit8);
 
    CHECK(unit8 >= unit7);
    CHECK(unit7 >= unit4);
    CHECK(unit4 <= unit2);
    
    CHECK(unit7 == unit7);
    CHECK(unit4 <= unit1);
    CHECK(unit2 == unit3);
    CHECK(unit4 == unit1);
    CHECK(unit9 == unit6);
    CHECK(unit8 == unit5);
    CHECK(unit7 == unit5);

    NumberWithUnits unit0(50 , "km");

    CHECK(unit4 <= unit9);
    CHECK(unit7 == unit1);
    CHECK(unit8 == unit1);
    CHECK(unit0 == unit1);
    CHECK(unit8 == unit0);
    CHECK(unit7 >= unit8);
}