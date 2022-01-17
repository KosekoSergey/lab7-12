#include <string>
#include <iostream>

using namespace std;

#pragma once

class Motherboard {
private:
	string name;  //название материнской платы
	int rate = 0;  //чатсота
	int num_of_slots = 0;  //кол-во разъемов
public:
	Motherboard();  //конструктор без параметров
	Motherboard(string name);  //конструктор с одним параметром
	Motherboard(string aname, int arate, int aslots);  //конструктор со всеми полями
	int check();  //проверка
	void print();  //вывод на экран характеристик
	string get_name();  //ф-ция получения названия
	int get_rate();  //частоты
	int get_slots();  //кол-ва разъемов
	void set_name(string aname);  //ф-ция присвоения названия
	void set_rate(int arate);  //частоты
	void set_slots(int aslots);  //кол-ва разъемов
	void input();  //Ввод с клавиатуры
};

