# Updated: 12/13/2021
# Study duration: 5 years.
# By AnetoEnterprise Inc. all rights reserved.

# You have a money transfer agency or a bank that you want to improve your transactions and attract your customers?
Digital currency or digital gold is at your fingertips for
perform this.

This manual covers NGold (Numeric Gold), a system of transactions
operational 24/7 without internet connection thanks to
a static library to allow all programmers in
the world to adapt it easily using the G ++ compiler for the
compilation of their applications of monetary transactions. The system
NGold can operate without an internet connection to ensure security
financial institutions and this does not prevent it from also adapting to
a web application for remote services to subscribers of your
financial institution.

The system can be compiled for use in other languages of programming such as PHP using CGI C ++ and JavaScript by NodeJS.

# b. Some examples of applications:
You manage a monetary transactions agency or you work in a bank and want to secure your transactions with information encryption technology advanced, NGold is better placed to ensure their security. You want to associate your money transfer agency or a bank to another without using your data at the reach of computer hackers, the solution is within your reach as long as your data is secure from your computer not connected.

You want to create a remote web application to facilitate your customers to carry out transactions wherever they are without being move, NGold ensures the security of a financial institution without internet connection associated with a remote web application for clients.

For the assurance and security of expenses made by the
government, NGold provides protection against
unnecessary currency embezzlement.

# c. Point covered in this manual:
Warning :
The NGold library is protected by the law relating to the right
author and by international conventions. Any reproduction
or partial or total distribution of this software without permission of
the company AnetoEnterprise Inc., by any means whatsoever, is
strictly prohibited. Anyone not respecting these
provisions will be guilty of the offense of counterfeiting and will be
liable to the penal sanctions provided for by law.

Only the source codes presented in this manual which are Open Source (Under
GNU license). That is, can be copied, modified and shared for free
for financial institutions such as banks, transfer agencies
money and others who want to get started with their own digital currencies
functional with or without internet connection.

Indeed, there is an operational digital currency management system on the internet called Blockchain. This is the far system of digital currencies existing Bitcoin, Ethereum and others. As you know, its technology works in such a way that all monetary transactions should be validated by minors (This is the nickname of the administrators of this Blockchain management) finally that consumers or users of this system do not keep a copy of the currency in use or already used not to disturb the system or not to use a currency two both to different recipients or to a single recipient.

Unlike this NGold currency transaction system, it works with or without internet connection in order to ensure the security of financial institutions that use its library and to protect currency information against computer hackers. It executes its processing transactions without the help of minors or administrators of the digital currency even if consumers or users of the digital currency are connected to the internet or offline. Not all tasks are done automatically, no Token, no Central Server, no longer a consumer database. Only money circulates with its own information.

This is what makes the currency generated by the NGold system a currency with automatic data execution (Stand Alone Data). He leaves the choice for sending users to specify the location where their recipients or beneficiaries of the currencies will recover their currencies in cash before transactions and once transactions are completed, beneficiaries will be free to recover their money as long as they are the only ones know the validation codes of their currencies and the exact locations for withdrawals. All this without an internet connection.

No hacker will be able to detect information relating to the currency transferred as long as it is encrypted and no financial institution will be connected to ensure the safety of all participating parties. You can keep the copy of the change as you see fit to try to make two successively withdrawals for a valid currency, the system NGold was designed to block all forced or already used requests as long as the currency generated will almost be used or validated in a specific financial institution.

Now let's get down to business.

# II. Part 1: INSTALLATION
In this chapter, you will start by learning about the different platforms forms and compilers.

# Introduction
Before you can play with the currency information, you you need to know some platforms and compiler that we will address it here.

# a. Platforms
NGold library can be installed in different platforms forms such as: Windows XP / 7/8/10, Linux, Mac OSX, FreeBSD and Unix. Among the listed platforms compatible for the integration of NGold Currency Information Encryption Library, we hope your financial institution also uses a between them.

# b. Compiler
Integration of the NGold library into your application service, required the installation of a G ++ compiler in order to adapt not only to the C ++ programming language but to others programming language too.

# 1. Preparation of the development environment:
We are now going to prepare our environment of development in order to install a G ++ compiler to facilitate the integration of the NGold library into your application for management of encrypted digital currencies. Unfortunately we were able to prepare the examples for two platforms.

# Windows:
Under windows XP / 7/8/10 you have two choices to prepare your development environment. You have the choice to install MinGW ![alt text](https://github.com/AnetoEnterprise/nGold/blob/main/IconeMinGW.png) or MSYS ![alt text](https://github.com/AnetoEnterprise/nGold/blob/main/IconeMSYS.png). With MinGW, once installed, you have the choice to check all the components or choose those of your choice in order to prepare your environment correctly as in the picture below:

![alt text](https://github.com/AnetoEnterprise/nGold/blob/main/MingGW.png)

In our case, we were able to check the GCC compiler and G++:
![alt text](https://github.com/AnetoEnterprise/nGold/blob/main/SuiteMinGW.png)

Using MSYS as the development environment, you need to install the GCC and G ++ online compiler from order as follows:
# pacman -S mingw-w64-x86_64-toolchain base-devel
![alt text](https://github.com/AnetoEnterprise/nGold/blob/main/MSYS.png)

# Linux:
With linux distributions such as Ubuntu and Debian, you can install the GCC and G ++ compiler by using the following command from your terminal:<br />
```shell
sudo apt-get install gcc g ++ -y
```

For the CentOS linux platform:
```shell
sudo yum install gcc g ++ -y
```

# 2. Installation of the NGold library
It is high time that never install our famous NGold library in order to integrate it into the application as as a static library of currencies digital. The installation procedures are somewhat similar imports the operating system (Platform) that you use.

First you need to download the NGold library if it is not already done and from your terminal type the command below in order to download it:<br />
```shell
cd -
wget https://sourceforge.net/projects/ngold/files/ngold-1.0.tar.xz/download
```

Once the package has downloaded to your hard drive, run the following commands to install the NGold library to ensure its development:<br />
```shell
tar -xvf ngold-1.0.tar.xz
cd ngold-1.0
./install.sh
```

# 3. Conclusion
We have just prepared our environment for fully developed and installed the library NGold. In the second part, we will see how proceed to call our encryption library.

# III.  Part 2: Development and Publication
If you have come to this point, know that you are already in the right sense. And you should know that the integration of the NGold library does not No C ++ programming language experience required. For go further with the C ++ programming language, you must find tutorials on the internet that are based on its programming. In this manual, we will only proceed with programming the integration of the NGold library.

# a. IDE (Integrated Development Environment)
An IDE is the integrated development environment designed to allow IT developers to code their applications easily with syntax colors so that the syntaxes are readable during programming. You can choose any text editor like Windows Notepad, Notepad ++, DevC ++ or others. In this manual, on Windows we will use the IDE DevC ++ and under Ubuntu, Notepad ++.

# b. The Header
The header, as the name suggests, is the header of our library of monetary ciphers. It's in this file header that will contain all the functions concerning our NGold library in order to adapt them to your application. To proceed, go to your project directory and create a ngold.h file which will be our Header and add the codes below after :<br />
```cpp
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
```

![alt text](https://github.com/AnetoEnterprise/nGold/blob/main/DevCPP.png)

We have just defined our Header, now we will move on to the
creating a sample application for our project. Let's create another file
and give them the name of TestAdmin.cpp like in the picture:
![alt text](https://github.com/AnetoEnterprise/nGold/blob/main/IconeHeauderF.png)

# Example 1:
First before we start to code our new application of
encrypted monetary transactions, we will use our Header file
ngold.h in the header of our TestAdmin.cpp file as follows:<br />
```cpp
#include "ngold.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {

return EXIT_SUCCESS;
}
```
<br />

NB: The integration of the NGold library depends on what you want To do. You do not have to use all the functions defined in the file Header. It depends on your idea and the service you want to offer to your clients.

But the only thing to know, if you want to design an app regarding your financial institution, you must first call the function to initialize the session to your application using the NGOLD_INITIAL_SESSION command.

This command is used to initialize the session of the computer on which will perform the tasks of monetary transactions. A computer that is not initialized with this function will not be able to process the information regarding transactions encrypted by the NGold library.

This NGOLD_INITIAL_SESSION function uses 10 parameters in order to initialize the computer regarding transactions.<br />
Why all these parameters?<br />
Each of them is useful from the first session of the application administration files on your computer.

- [x] Lang: This parameter allows IT developers define the language on which the NGold library goes return the response if the request is successful or unsuccessful. For this first version, this parameter uses two values. The en for the English-speaking countries and the fr for the countries francophone;

- [x] NameOfBank: It is with this parameter that the establishment financier will define the name regarding his business;

- [x] NameOfEstablis: Once the name of your company, you will be expected to also define the name of the computer on which the transactions will be executed. For example, you have a bank and with this bank you have 5 establishments that will manage the transactions. So each of these computers should have a unique name to ensure the security of encrypted currency;

- [x] City: The exact city of your establishment;

- [x] Municipality: The municipality of your establishment;

- [x] Neighborhood: The neighborhood where you are based;

- [x] Street: The street of the establishment;

- [x]  RueNum: The parcel number;

- [x] Ref: And a little reference so that your customers get to find you easily thanks to this information that the NGold library will encrypt to initialize your computer and secure it against hackers who would like
spy on you for invalid currency or send an unwanted person for withdrawal.

To do this, let's add the session initialization function to our file TestAdmin.cpp as follows:
```cpp
#include "ngold.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
string resultat="";
resultat=NGOLD_INITIAL_SESSION("en", "MyBankA", "EstablishmentA", "DRC", "Kinshasa", "Ngaliema", "Ngoma Kinkusa", "Route de matadi", "200", "En diagonale avec Peloustore");
cout << resultat << endl;
return EXIT_SUCCESS;
}
```
  
Now let's test together to see the result of our function initialization. Before we can test our trial application, we must first compile both of our files ngold.h and TestAdmin.cpp so that they become an executable application according to the platform we use for the development.

# c. Compilation
To make a call to the NGold library that we have installed otherwise to our G ++ compiler, we have to run the following command from a MinGW or MSYS terminal:
```shell
cd E:/votredossier/exemple
g++ TestAdmin.cpp -o TestAdmin -lngold
./TestAdmin.exe
```
We see that the –lngold is part of our NGold library call before compiling an executable file.

And here's the result :
![alt text](https://github.com/AnetoEnterprise/nGold/blob/main/Test1.png)

This generated key is free with 1000 sessions for you to test
correctly your application for testing currencies SandBox version.
For the Production and Commercial version, we will see at the end of this manual how to proceed to get the key to a real digital currency encrypted. And you can see from the location of your executable file that you have just compiled and executed, a file with the extension .ng with the name of your establishment (Computer):
![alt text](https://github.com/AnetoEnterprise/nGold/blob/main/File1.png) In our example we were able to define as the computer name that we use at EstablishmentA. This is why this file also has this initialization name including extension ng.

If your computer is not compatible for using the library NGold, you will get the failure response as follows:
![alt text](https://github.com/AnetoEnterprise/nGold/blob/main/MSYSERREUR.png)

This lsblk: command not found error message sets the library NGold cannot find your hard drive with this command. So you will be supposed to install it so that the encryption system works correctly from your computer on which will perform all of its functions.

We now want to convert our generated free sessions key to that it be shared with our partner banks. For example, you worked in collaboration with another bank or money transfer agency and that you want your different customers to transfer the money without changing bank or agency, you will be supposed to integrate the function NGOLD_CONVERT_ALL_SESSIONS. This function will allow NGold to convert all your establishments using the .ng extension to a file with the ngp extension.

As we specified above, if you have 5 or more establishments, at each will initialize their computer and this function will be executed using a specific computer. In this case you will be supposed to recover all the files with the .ng extension in each initialized computer in order to convert them easily to an encrypted partnership file.

# Example 2:
Let's create another app, you can choose any name and add the following syntaxes:
```cpp
#include "ngold.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
string resultat="";
resultat=NGOLD_CONVERT_ALL_SESSIONS("en", "MyBankA");
cout << resultat << endl;
return EXIT_SUCCESS;
}
```

The MyBankA parameter represents the name of our test bank. So at the end of conversion of all initialization files, the partnership file will be called MyBankA.ngp so that it can be shared on all computers from your bank and those of your partners.

NB: All files with the .ng extension must be found on the same location of your converting executable application.

Now you can compile and test your new application by placing all files with the .ng extension in the same directory, you will see a new file created with the name of your bank or transfer with encrypted partnership .ngp extension.
# Under Windows:
![alt text](https://github.com/AnetoEnterprise/nGold/blob/main/SousWindows1.png)
![alt text](https://github.com/AnetoEnterprise/nGold/blob/main/SousWindows2.png)

# Under Linux:
![alt text](https://github.com/AnetoEnterprise/nGold/blob/main/SousLinux1.png)
![alt text](https://github.com/AnetoEnterprise/nGold/blob/main/SousLinux2.png)

![alt text](https://github.com/AnetoEnterprise/nGold/blob/main/File2.png) You are free to share this file via all the computers in your establishment and your partners also on their part, will share the file in the computers they use for the management of NGold digital currency by completely safe.

# Example 3
Now it's time to create a client application allowing our clients to transfer money easily across all platforms of communications or in all remote wireless networks. With this part, you have the choice to choose if your application will be accessible to users connected remote or unconnected remote users.

Noted that, the users not logged in are banks or agencies partners that you worked with them. While users do not connected will be your customers who want to transfer money to their families, comrades or others without moving or using a Credit Card but just with their mobile phones or computers.

Before proceeding, you should know that the generation of the currency encrypted numeric required both functions NGOLD_LIST_ESTABLISHMENTS and NGOLD_GENERATE_MONEY.

- [x] NGOLD_LIST_ESTABLISHMENTS: This function uses a single parameter for the language of the response to a request. It allows to list the establishments from a .ngp partnership file in order to retrieve all the information regarding the exact locations of each establishment so that users can choose well the establishment where the beneficiary will travel for recovery of his money.

NB: It is a secret between the sender and the recipient of the change digital generated.
- [x] NGOLD_GENERATE_MONEY: This one uses 3 or 4 parameters:
a) Lang: As usual the language of the results response;

b) NameOfEstablis: The name of the institution generating the currency (In our example EstablishmentA);

c) Amount: The amount to be transferred to the beneficiary;

d) Pass: And the password to allow the beneficiary of the change to define it before its withdrawal. This parameter is not mandatory but this is just for the security of monetary information. If you don't not set, the NGold library will automatically generate a validation code for you.

Let's move on to the application, create another file with the name of TestClient.cpp and add the following syntaxes:
```cpp
#include "ngold.h"
#include <iostream>
#include <string>
  
using namespace std;
  
int main(int argc, char** argv) {
string resultat="";
resultat=NGOLD_LIST_ESTABLISHMENTS("en");
cout << resultat << endl;
resultat=NGOLD_GENERATE_MONEY("en", "EstablishmentA", "0.5$");
cout << resultat << endl;
return EXIT_SUCCESS;
}
```
Compile and run the application you will see your digital currency correctly encrypted as shown in the image below:
![alt text](https://github.com/AnetoEnterprise/nGold/blob/main/NGOGENERATION.png)

We can clearly see from the image, the application had first listed the establishments so that the user can choose the location where the beneficiary will get their money back. Subsequently, the generation of currency carried out with the following information:

+ VC: The VC is the validation code (In English Validating Code) that the beneficiary will use to recover his money in order to assert that he is the owner of the currency;

+ NGOLD: This parameter represents the encrypted digital currency that the sender will copy in order to send it to the beneficiary as currency valid;

+ RS: As the name suggests Rest Sessions, displays the outcome of the remaining sessions for the next generations of currencies so you know if you have how many valid sessions left that the NGold library is chargeable for each session of the generation of encrypted digital currency;

+ BANK: Displays the bank or agency receiving the money;

+ ESTABLISHMENT: The institution receiving the currency;

+ DETAILS: And details concerning the establishment on which the beneficiary will travel for the recovery of his money.

We have just seen how our library displays the number of sessions remaining after generation of the encrypted currency. So we go see how to check the remaining sessions without generating change. The function that gives us this possibility is the NGOLD_VERIFY_SESSIONS. This function uses two parameters Lang and NameOfEstablis in order to view the remaining sessions of your computer regarding the generation of the NGold's encrypted digital currency.

# Example 4
In your existing application or existing TestAdmin.cpp file, add the syntaxes below:
```cpp
#include "ngold.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
string resultat="";
resultat=NGOLD_VERIFY_SESSIONS("en", "EstablishmentA");
cout << resultat << endl;
return EXIT_SUCCESS;
}
```
Compile and run the application you will see the remains of your sessions as represented here:
![alt text](https://github.com/AnetoEnterprise/nGold/blob/main/SessionsNumber.png)

It is now high time that never for the bank or the agency partner collects and verifies the valid change before a withdrawal of his beneficiary. The function to check the valid currency is nice and well NGOLD_VERIFY_MONEY. It is force-fed with the two parameters Lang and Money:

+ Lang: The language of the response for the verification request;
+ Money: And the recipient's encrypted digital currency.

# Example 5
We still continue with our TestAdmin.cpp file, add the following syntaxes below for checking the valid or invalid currency of your customers:
```cpp
#include "ngold.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
string resultat="";
resultat=NGOLD_VERIFY_MONEY ("en", "-015--06---1402--1500-");
cout << resultat << endl;
return EXIT_SUCCESS;
}
```

In order to compile and test, we have the following result containing the name of the bank or transfer agency, the value of the currency and its validation:
![alt text](https://github.com/AnetoEnterprise/nGold/blob/main/VerifyMoney.png)
NB: If the verified currency is the test currency, your Status will be SandBox. In addition, your Status will be as shown in the image for the Production (Real money).

# Example 6
Now let's move on to withdrawing the change. Once the beneficiary has all information relating to the recovery of his money, he will be free to go to the bank or money transfer agency intended for that currency digital to easily recover your money.

The compatible function for making a withdrawal is NGOLD_USING_MONEY using 3 parameters Lang, Money and VC:
+ Lang: Define the language of the response concerning the request;

+ Money: Represents the currency to use;

+ VC: And the validation code of the currency on which it was generated.

Let's add the following syntaxes to the TestAdmin.cpp file, compile and test:
```cpp
#include "ngold.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
string resultat="";
resultat=NGOLD_USING_MONEY("en", "-015--06---1402--1500-", "47135");
cout << resultat << endl;
return EXIT_SUCCESS;
}
```
As a result we have:
![alt text](https://github.com/AnetoEnterprise/nGold/blob/main/ValidationMonnaie.png)
Which means our withdrawal was done correctly.

We have come to the end of our testing exercises, now we can request permission from the NGold library to switch to mode Production to present the final product to our consumers. Both functions we have left are the NGOLD_ASK_FOR_KEY and NGOLD_VALIDATE_KEY.

- [x] NGOLD_ASK_FOR_KEY: This function requires 4 following parameters and
requests the Production version key:

+ Lang: Define the language of the response;

+ NameOfBank: The name of the bank or transfer agency;

+ NameOfEstablis: The name of the institution initiating the request for the production key;

+ mySessionsNumber: And the number of sessions requested.

- [x] NGOLD_VALIDATE_KEY: For the validation of the key in your computer once activated from AnetoEnterprise support, this required function 2 parameters Lang and myKey.
+ Lang: Once again the language of the response obtained;

+ myKey: And the key retrieved from the company support distributor of the NGold library.

Let's end it!
In the same TestAdmin.cpp file, add the following syntaxes in order to launch the request and activate your sessions:
```cpp
#include "ngold.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
string resultat="";
resultat=NGOLD_ASK_FOR_KEY("en", "MyBankA", "EstablishmentA", "3000");
cout << resultat << endl;
resultat=NGOLD_VALIDATE_KEY("en", "-015--06---1402--1500-", "47135");
cout << resultat << endl;
return EXIT_SUCCESS;
}
```
Let's compile and test the final application.

# d. Conclusion
We have just seen how the NGold library performs its processing and returning the results in XML format for you allow it to be well adapted to other programming languages compatible with reading information in XML format. We hope that after reading this you will be able to innovate your financial institution to facilitate future transactions at the adaptation of your graphical interface of the application of services via the NGold library.

# IV. I Thanks

:+1: We first thank our God for having us kept in good health during all these years tests concerning this NGold library;

:+1: Rodriguez Lufungula for his moral support and peace to his soul;

:+1: Nagui Divangi for the reading and validation of this project;

:+1: And to AnetoEnterprise Inc. For the financing of this project.

![](https://github.com/AnetoEnterprise/nGold/blob/main/Logo.png | width=40) Copyright 2021 by AnetoEnterprise Inc. all rights reserved.
