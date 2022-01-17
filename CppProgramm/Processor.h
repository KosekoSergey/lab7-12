#include <string>
#include <iostream>

using namespace std;

#pragma once

class Processor {
private:
	string name;  //название процессора
	int rate = 0;  //частота
	int bitness = 0;  //разрядность процессора
public:
	void init(string aname, int arate, int abitness);  //создание процессора
	int check();  //проверка
	void print();  //вывод на экран характеристик
	string get_name();  //ф-ция получения названия
	int get_rate();  //частоты
	int get_bitness();  //разрядности
	void set_name(string aname);  //ф-ция присвоения названия
	void set_rate(int arate);  //частоты
	void set_bitness(int abitness);  //разрядности
	void input();  //Ввод с клавиатуры
};

