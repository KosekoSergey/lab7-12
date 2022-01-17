#include "Motherboard.h"

void Motherboard::init(string aname, int arate, int aslots) {  //создание материнской платы
	name = aname;
	num_of_slots = aslots;
	rate = arate;
}

int Motherboard::check() {  //проверка
	if (name.length() != 0) return 1;
	else return 0;
}

void Motherboard::print() {  //вывод на экран характеристик
	cout << "Название материнской платы: " << name << endl;
	cout << "Частота шины: " << rate << endl;
	cout << "Количество основных разъемов: " << num_of_slots << endl;
}

string Motherboard::get_name() {  //ф-ция получения названия
	return name;
}

int Motherboard::get_rate() {  //частоты
	return rate;
}

int Motherboard::get_slots() {  //кол-ва разъемов
	return num_of_slots;
}

void Motherboard::set_name(string aname) {  //ф-ция присвоения названия
	name = name;
}

void Motherboard::set_rate(int arate) {  //частоты
	rate = rate;
}

void Motherboard::set_slots(int aslots) {  //кол-ва разъемов
	num_of_slots = aslots;
}

void Motherboard::input() {  //Ввод с клавиатуры
	cin >> name;
	cin >> rate;
	cin >> num_of_slots;
}