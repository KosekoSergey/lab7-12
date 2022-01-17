#include "Ram.h"

Ram::Ram() {}  //конструктор без параметров

Ram::Ram(string name) {  //конструктор с одним параметром
	this->name = name;
}

Ram::Ram(string name, int rate, int memory) {  //конструктор со всеми полями
	this->name = name;
	this->rate = rate;
	this->memory = memory;
}

int Ram::check() {  //проверка
	if (name.length() != 0) return 1;
	else return 0;
}

void Ram::print() {  //вывод на экран характеристик
	cout << "Название оперативной памяти: " << name << endl;
	cout << "Частота оперативной памяти: " << rate << endl;
	cout << "Объем оперативной памяти: " << memory << endl;
}

string Ram::get_name() {  //ф-ция получения названия
	return name;
}

int Ram::get_rate() {  //частоты
	return rate;
}

int Ram::get_memory() {  //объема памяти
	return memory;
}

void Ram::set_name(string aname) {  //ф-ция присвоения названия
	name = aname;
}

void Ram::set_rate(int arate) {  //частоты
	rate = arate;
}

void Ram::set_memory(int amemory) {  //объема памяти
	memory = amemory;
}

void Ram::input() {  //Ввод с клавиатуры
	cin >> name;
	cin >> memory;
	cin >> rate;
}

void Ram::copy(const Ram& temp) {  //функция копирования
	name = temp.name;
	rate = temp.rate;
	memory = temp.memory;
}
