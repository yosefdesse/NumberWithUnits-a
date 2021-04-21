

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
# include "NumberWithUnits.hpp"

using namespace ariel;
// namespace ariel {
   
   

    NumberWithUnits :: NumberWithUnits(double n, const string& str)
    {
                this->num = n;
                this->unit = str;
    }
    // NumberWithUnits :: ~NumberWithUnits(){}
    void ariel::NumberWithUnits::read_units(ifstream &units){  }

    NumberWithUnits ariel::operator+(const NumberWithUnits &unit1, const NumberWithUnits &unit2){ return unit1 ; }
    NumberWithUnits ariel::operator+=(const NumberWithUnits &unit1, const NumberWithUnits &unit2){ return unit1 ; }
    NumberWithUnits operator++(const NumberWithUnits &unit1, int){ return unit1 ; }
    NumberWithUnits ariel::operator-(const NumberWithUnits &unit1, const NumberWithUnits &unit2){ return unit1 ; }
    NumberWithUnits ariel::operator-(const NumberWithUnits &unit1){ return unit1 ; }
    NumberWithUnits operator-=(const NumberWithUnits &unit1, const NumberWithUnits &unit2){ return unit1 ; }
    NumberWithUnits operator--(const NumberWithUnits &unit1, int){ return unit1 ; }
    
    bool ariel::operator>(const NumberWithUnits &unit1, const NumberWithUnits &unit2){ return true ; }
    bool ariel::operator>=(const NumberWithUnits &unit1, const NumberWithUnits &unit2){ return true ; }
    bool operator<(const NumberWithUnits &unit1, const NumberWithUnits &unit2){ return true ; }
    bool ariel::operator<=(const NumberWithUnits &unit1, const NumberWithUnits &unit2){ return true ; }
    bool ariel::operator==(const NumberWithUnits &unit1, const NumberWithUnits &unit2){ return true ; }
    bool operator!=(const NumberWithUnits &unit1, const NumberWithUnits &unit2){ return true ; }

    NumberWithUnits operator++(const NumberWithUnits &unit1){ return unit1 ; }
    NumberWithUnits operator--(const NumberWithUnits &unit1){ return unit1 ; }

    NumberWithUnits ariel::operator*(const NumberWithUnits &unit1 , double num ){ return unit1 ; }
    NumberWithUnits ariel::operator*(double num , const NumberWithUnits &unit1 ){ return unit1 ; }



    ostream& ariel::operator<<(ostream &os , const NumberWithUnits &unit1){ return os ;};
    istream& ariel::operator>>(istream &is , const NumberWithUnits &unit1){ return is ;};
    
// }