#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <ostream>
#include <istream>

using namespace std;

namespace ariel
{

    class NumberWithUnits
    {
        private:
            double num;
            string unit;
        public:
            NumberWithUnits(){};
            NumberWithUnits(double n, const string& str);
            // ~NumberWithUnits(){};
            static void read_units(ifstream &unit);

           

            friend NumberWithUnits operator+(const NumberWithUnits &unit1, const NumberWithUnits &unit2);
            friend NumberWithUnits operator+=(const NumberWithUnits &unit1, const NumberWithUnits &unit2);
            friend NumberWithUnits operator++(const NumberWithUnits &unit1, int);
            friend NumberWithUnits operator-(const NumberWithUnits &unit1);
            friend NumberWithUnits operator-(const NumberWithUnits &unit1 , const NumberWithUnits &unit2);
            friend NumberWithUnits operator-=(const NumberWithUnits &unit1, const NumberWithUnits &unit2);
            friend NumberWithUnits operator--(const NumberWithUnits &unit1, int);

            friend bool operator>(const NumberWithUnits &unit1, const NumberWithUnits &unit2);
            friend bool operator>=(const NumberWithUnits &unit1, const NumberWithUnits &unit2);
            friend bool operator<(const NumberWithUnits &unit1, const NumberWithUnits &unit2);
            friend bool operator<=(const NumberWithUnits &unit1, const NumberWithUnits &unit2);
            friend bool operator==(const NumberWithUnits &unit1, const NumberWithUnits &unit2);
            friend bool operator!=(const NumberWithUnits &unit1, const NumberWithUnits &unit2);
            
            friend NumberWithUnits operator++(const NumberWithUnits &unit1);
            friend NumberWithUnits operator--(const NumberWithUnits &unit1);

            friend ostream& operator<<(ostream &os , const NumberWithUnits &unit1);
            friend istream& operator>>(istream &is , const NumberWithUnits &unit1);
           


            friend NumberWithUnits operator*(const NumberWithUnits &unit1 , double num );
            friend NumberWithUnits operator*(double num , const NumberWithUnits &unit1 );




    };

}