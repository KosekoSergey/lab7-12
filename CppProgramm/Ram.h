#include <string>
#include <iostream>

using namespace std;

#pragma once

class ram {
private:
	string name;  //название оперативной памяти
	int memory = 0;  // кол-во оперативной памяти
	int rate = 0;  //частота
public:
	void init(string aname, int arate, int amemory);  //создание оперативной памяти
	int check();  //проверка
	void print(); //вывод на экран характеристик
	string get_name();  //ф-ция получения названия
	int get_rate();  //частоты
	int get_memory();  //объема памяти
	void set_name(string aname);  //ф-ция присвоения названия
	void set_rate(int arate);  //частоты
	void set_memory(int amemory);  //объема памяти
	void input();  //Ввод с клавиатуры
};

