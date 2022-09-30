#include <iostream>
#include <Windows.h>
using namespace std;







class Passport
{
	
	string ua_name;
	string ua_surname;
	string ua_patronymic;
	string date_of_expiry;
	int document_num;

protected:
	string en_name;
	string en_surname;
	string sex;
	string date_of_birth;


public:
	Passport() {
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
	Passport(string ua_name, string ua_surname, string ua_patronymic, string date_of_expiry, int document_num, string en_name, string en_surname, string sex, string date_of_birth) {
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
	void Print() {
		cout << "################################################################" << endl;
		cout << "#ПАСПОРТ ГРОМАДЯНИНА УКРАЇНИ PASSPORT OF THE CITIZEN OF UKRAINE#" << endl << endl;
		cout << "Прізвище -  " << ua_surname << "( " << en_surname << ")" <<  endl;
		cout << "Ім'я -  " << ua_name << "( " << en_name << ")" << endl;
		cout << "По батькові -  " << ua_patronymic << endl;
		cout << "Стать - " << sex << endl;
		cout << "Дата народження - " << date_of_birth << endl;
		cout << "Дійсний до - " << date_of_expiry << endl;
		cout << "Номер документу - #" << document_num << endl;

	}

};


class ForeignPassport {

};




int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "UKR");


	Passport pas1;

	pas1.Print();



}