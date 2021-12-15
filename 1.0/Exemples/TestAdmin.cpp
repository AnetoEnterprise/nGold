#include "ngold.h"
#include <iostream>
#include <string>

using namespace std;


int main(int argc, char** argv)	{
string resultat="";
//Beginning of the establishment session
resultat=NGOLD_INITIAL_SESSION("en", "MyBankA", "EstablishmentA", "DRC", "Kinshasa", "Ngaliema", "Ngoma Kinkusa", "Route de matadi", "200", "En diagonale avec Peloustore");
cout << resultat << endl;
//Ending of the establishment session



//Beginning of syncronization of establishments
resultat=NGOLD_CONVERT_ALL_SESSIONS("en", "MyBankA");
cout << resultat << endl;
//Ending of syncronization of establishments



//Start key request
//resultat=NGOLD_ASK_FOR_KEY("en", "MyBankA", "EstablishmentA", "3000");
//cout << resultat << endl;
//End key request





//Start key request
//resultat=NGOLD_VALIDATE_KEY("en", "-015--06---1402--1500--015--0312--19--0014--016--1402--18--1205--1502--1500--19--081--0414--0513--06111--081--081--0711--081--0711--09--0711--081--19--0414--15--1303--0411--0311--015--1500--1104--19--06111--09--09--09--19--105--1203--05--1105--19--015--06---1402--1500--015--0312-");
//cout << resultat << endl;
//End key request





//Start key request
//resultat=NGOLD_VERIFY_SESSIONS("en", "EstablishmentA");
//cout << resultat << endl;
//End key request






//Start generate numeric money
//resultat=NGOLD_VERIFY_MONEY("en", "-015--06---1402--1500--015--0312--19--0414--15--1303--0411--0311--015--1500--1104--19--0414--15--1303--0411--0311--015--1500--1104--19--0014--016--1402--18--1205--1502--1500--19--09--1602--0414--0011--19--081--0513--081--081--06111--081--19--06111--081--1602--081--0513--19--106--1500--0213--1104--1105--19--015--06---1402--1500--015--0312-");
//cout << resultat << endl;
//End generate numeric money






//Start generate numeric money
//resultat=NGOLD_USING_MONEY("en", "-015--06---1402--1500--015--0312--19--0414--15--1303--0411--0311--015--1500--1104--19--0414--15--1303--0411--0311--015--1500--1104--19--0014--016--1402--18--1205--1502--1500--19--09--1602--0414--0011--19--081--0513--081--081--06111--081--19--06111--081--1602--081--0513--19--106--1500--0213--1104--1105--19--015--06---1402--1500--015--0312-", "141131");
//cout << resultat << endl;
//End generate numeric money

return EXIT_SUCCESS;
}
