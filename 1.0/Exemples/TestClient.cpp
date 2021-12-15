#include "ngold.h"
#include <iostream>
#include <string>

using namespace std;


int main(int argc, char** argv)	{
string resultat="";

//Start key request
resultat=NGOLD_LIST_ESTABLISHMENTS("en");
cout << resultat << endl;
//End key request




//Start generate numeric money
resultat=NGOLD_GENERATE_MONEY("en", "EstablishmentA", "0.5$");
cout << resultat << endl;
//End generate numeric money





//Start generate numeric money
//resultat=NGOLD_GENERATE_MONEY_WITH_PASS("en", "EstablishmentA", "0.5$", "123456789");
//cout << resultat << endl;
//End generate numeric money


return EXIT_SUCCESS;
}
