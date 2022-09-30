#include "Passports.h"

Passport::Passport()
{
	ua_name = "Мар'яна";
	ua_surname = "Ткаченко";
	ua_patronymic = "Іванівна";

	en_name = "Mariana";
	en_surname = "Tkachenko";

	sex = "F";
	date_of_birth = "24.08.1991";
	date_of_expiry = "13.12.2025";

	document_num = rand() % (100000000 - 999999999) + 100000000;
}

Passport::Passport(string ua_name, string ua_surname, string ua_patronymic, string date_of_expiry, int document_num, string en_name, string en_surname, string sex, string date_of_birth)
{
	this->ua_name = ua_name;
	this->ua_surname = ua_surname;
	this->ua_patronymic = ua_patronymic;
	this->date_of_expiry = date_of_expiry;
	this->document_num = document_num;
	this->en_name = en_name;
	this->en_surname = en_surname;
	this->sex = sex;
	this->date_of_birth = date_of_birth;
}

void Passport::Print()const
{
	cout << "################################################################" << endl;
	cout << " 		  ПАСПОРТ ГРОМАДЯНИНА УКРАЇНИ                         " << endl;
	cout << "################################################################" << endl << endl;
	cout << "Прізвище -  " << ua_surname << "( " << en_surname << ")" << endl;
	cout << "Ім'я -  " << ua_name << "( " << en_name << ")" << endl;
	cout << "По батькові -  " << ua_patronymic << endl;
	cout << "Стать - " << sex << endl;
	cout << "Дата народження - " << date_of_birth << endl;
	cout << "Дійсний до - " << date_of_expiry << endl;
	cout << "Номер документу - #" << document_num << endl << endl;
	cout << "################################################################" << endl;
}

ForeignPassport::ForeignPassport()
{
	en_name = "Mariana";
	en_surname = "Tkachenko";

	sex = "F";
	date_of_birth = "24.08.1991";

	visa_name = "United Kingdom Visa";
	nationality = "Ukrainian";
	visa_number = rand() % (100000000 + 900000000) + 100000000;
	foreign_passport_num = rand() % (500000000 + 900000000) + 500000000;
	cout << endl << endl;
}

ForeignPassport::ForeignPassport(string name, string surname, string sex, string dateofbirth, string visa_name, string nationality, int visa_number, int passportnum)
{
	en_name = name;
	en_surname = surname;
	this->sex = sex;
	date_of_birth = dateofbirth;

	this->visa_name = visa_name;
	this->nationality = nationality;

	this->visa_number = visa_number;
	foreign_passport_num = passportnum;
}

void ForeignPassport::Print()const
{
	cout << "################################################################" << endl;
	cout << "			Foreign Passport                            " << endl;
	cout << "################################################################" << endl << endl;
	cout << "First Name - " << en_name << endl;
	cout << "Second Name - " << en_surname << endl;
	cout << "Sex - " << sex << endl;
	cout << "Date of birth - " << date_of_birth << endl;
	cout << "Nationality - " << nationality << endl;
	cout << "Type of visa - " << visa_name << endl;
	cout << "Visa number - " << visa_number << endl;
	cout << "Foreign passport number - " << foreign_passport_num << endl << endl;
	cout << "################################################################" << endl;
}
