#include <iostream>
#include <Windows.h>
#include "Passports.h"
using namespace std;




int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "UKR");


	Passport pas1;
	pas1.Print();


	ForeignPassport pa1;
	pa1.Print();


	return 0;
}