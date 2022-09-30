#pragma once
#include <iostream>
using namespace std;


class Passport
{
	string ua_name;					//Ukrainian name.
	string ua_surname;				//Ukrainian surname.
	string ua_patronymic;			//Ukrainian patronymic (Отчество).
	string date_of_expiry;			//Date when the document will expire.
	int document_num;				//Document Number.
protected:
	string en_name;					//English name.
	string en_surname;				//Englosh surname.
	string sex;						//Sex M/F.
	string date_of_birth;			//Date of birth.
public:
	Passport();						//Will generate predetermined data.
	Passport(string ua_name, string ua_surname, string ua_patronymic, string date_of_expiry, int document_num, string en_name, string en_surname, string sex, string date_of_birth);
	void Print()const;				//Prints the ukrainian passport.
};


class ForeignPassport :public Passport { //Inheritance. Will inherit all the protected fields in the Passport class.
	int foreign_passport_num;		//Foreign passport number.
	int visa_number;				//Serial number of foreign passport.
	string visa_name;				//Type of visa, identifier of visa's data.
	string nationality;				//Nationality of the person.

public:
	ForeignPassport();				//Will generate predetermined data.
	ForeignPassport(string name, string surname, string sex, string dateofbirth, string visa_name, string nationality, int visa_number, int passportnum);
	void Print()const;				//Prints the foreign passport.
};