#pragma once
#include <string>
#include <iostream>

using namespace std;

class videocard {
private:
	string name;  //название видеокарты
	int rate = 0; //частота
	int memory = 0;  //объем видеопамяти
public:
	void init(string aname, int arate, int amemory);  //создание видеокарты
	int check();  //проверка видеокарты
	void print();  //вывод на экран характеристик
	string get_name();  //ф-ция получения названия видеокарты
	int get_rate();  //частоты
	int get_memory();  //объема видеопамяти
	void set_name(string aname);  //ф-ция присвоения названия видеокарты
	void set_rate(int arate);  //частоты
	void set_memory(int amemory);  //объема видеопамяти
	void input();  //Ввод с клавиатуры
};

