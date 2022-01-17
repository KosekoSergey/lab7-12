#include "Processor.h"

void Processor::init(string aname, int arate, int abitness) {  //создание процессора
	name = aname;
	bitness = abitness;
	rate = arate;
}

int Processor::check() {  //проверка
	if (name.length() != 0) return 1;
	else return 0;
}

void Processor::print() {  //вывод на экран характеристик
	cout << "Название процессора: " << name << endl;
	cout << "Частота процессора: " << rate << endl;
	cout << "Разрядность процессора: " << bitness << endl;
}

string Processor::get_name() {  //ф-ция получения названия
	return name;
}

int Processor::get_rate() {  //частоты
	return rate;
}

int Processor::get_bitness() {  //разрядности
	return bitness;
}

void Processor::set_name(string aname) {  //ф-ция присвоения названия
	name = aname;
}

void Processor::set_rate(int arate) {  //частоты
	rate = arate;
}

void Processor::set_bitness(int abitness) {  //разрядности
	bitness = abitness;
}

void Processor::input() {  //Ввод с клавиатуры
	cin >> name;
	cin >> rate;
	cin >> bitness;
}