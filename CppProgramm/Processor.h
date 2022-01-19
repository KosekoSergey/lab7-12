#include <string>
#include <iostream>

using namespace std;

#pragma once

class Pdevice {
public: 
	virtual string get_name() = 0;
	virtual void set_name(string name) = 0;
};

class Processor : Pdevice
{
private:
	string name;
	int rate = 0;  //частота
	int bitness = 0;  //разрядность процессора
public:
	Processor();  //конструктор без параметров
	Processor(string name);  //конструктор с одним параметром
	Processor(string aname, int arate, int abitness);  //конструктор со всеми полями
	string get_name();
	void set_name(string name);
	int check();  //проверка
	void print();  //вывод на экран характеристик
	int get_rate();  //частоты
	int get_bitness();  //разрядности
	void set_rate(int arate);  //частоты
	void set_bitness(int abitness);  //разрядности
	void input();  //Ввод с клавиатуры
};

