#include "Processor.h"

Processor::Processor() {}  //конструктор без параметров

Processor::Processor(string name) {  //конструктор с одним параметром
	this->name = name;
}

Processor::Processor(string aname, int arate, int abitness) {  //конструктор со всеми пол€ми
	name = aname;
	bitness = abitness;
	rate = arate;
}

int Processor::check() {  //проверка
	if (name.length() != 0) return 1;
	else return 0;
}

void Processor::print() {  //вывод на экран характеристик
	cout << "Ќазвание процессора: " << name << endl;
	cout << "„астота процессора: " << rate << endl;
	cout << "–азр€дность процессора: " << bitness << endl;
}

string Processor::get_name() {  //ф-ци€ получени€ названи€
	return name;
}

void Processor::set_name(string aname) {  //ф-ци€ присвоени€ названи€
	name = aname;
}

int Processor::get_rate() {  //частоты
	return rate;
}

int Processor::get_bitness() {  //разр€дности
	return bitness;
}

void Processor::set_rate(int arate) {  //частоты
	rate = arate;
}

void Processor::set_bitness(int abitness) {  //разр€дности
	bitness = abitness;
}

void Processor::input() {  //¬вод с клавиатуры
	cin >> name;
	cin >> rate;
	cin >> bitness;
}