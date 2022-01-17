#include "Videocard.h"

Videocard::Videocard() {}  //конструктор без параметров

Videocard::Videocard(string name) {  //конструктор с одним параметром
	this->name = name;
}

Videocard::Videocard(string aname, int arate, int amemory) {  //конструктор со всеми полями
	name = aname;
	rate = arate;
	memory = amemory;
}

int Videocard::check() {  //проверка видеокарты
	if (name.length() != 0) return 1;
	else return 0;
}

void Videocard::print() {  //вывод на экран характеристик
	cout << "Название видеокарты: " << name << endl;
	cout << "Частота видеокарты: " << rate << endl;
	cout << "Объем видеопамяти: " << memory << endl;
}

string Videocard::get_name() {  //ф-ция получения названия видеокарты
	return name;
}

int Videocard::get_rate() {  //частоты
	return rate;
}

int Videocard::get_memory() {  //объема видеопамяти
	return memory;
}

void Videocard::set_name(string aname) {  //ф-ция присвоения названия видеокарты
	name = aname;
}

void Videocard::set_rate(int arate) {  //частоты
	rate = arate;
}

void Videocard::set_memory(int amemory) {    //объема видеопамяти
	memory = amemory;
}

void Videocard::input() {  //Ввод с клавиатуры
	cout << "Введите название видеокарты: ";
	cin >> name;
	do {		
		try {
			cout << "Введите частоту видеокарты: ";
			cin >> rate;
			if (rate <= 0)
			{
				rate = -1;
				throw "Данное значение должно быть больше 0\n";
			}
		}
		catch (const char* e) {
			cerr << "Error" << e;
		}
	} while (rate == -1);
	do {
		try {
			cout << "Введите объем видеопамяти: ";
			cin >> memory;
			if (memory <= 0)
			{
				memory = -1;
				throw "Данное значение должно быть больше 0\n";
			}
		}
		catch (const char* e) {
			cerr << "Error" << e;
		}
	} while (memory == -1);
}