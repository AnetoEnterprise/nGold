#ifndef NGOLD_H
#define NGOLD_H

#include <iostream>
#include <string.h>

using namespace std;

string NGOLD_INITIAL_SESSION(string Lang, string NameOfBank, string NameOfEstablis, string Country, string Ville, string Commune, string Quartier, string Rue, string RueNum, string Ref);
string NGOLD_CONVERT_ALL_SESSIONS(string Lang, string NameOfBank);
string NGOLD_ASK_FOR_KEY(string Lang, string NameOfBank, string NameOfEstablis, string mySessionsNumber);
string NGOLD_VALIDATE_KEY(string Lang, string myKey);
string NGOLD_LIST_ESTABLISHMENTS(string Lang);
string NGOLD_VERIFY_SESSIONS(string Lang, string NameOfEstablis);
string NGOLD_GENERATE_MONEY(string Lang, string NameOfEstablis, string Amount);
string NGOLD_GENERATE_MONEY_WITH_PASS(string Lang, string NameOfEstablis, string Amount, string Pass);
string NGOLD_VERIFY_MONEY(string Lang, string Money);
string NGOLD_USING_MONEY(string Lang, string Money, string VC);

#endif
