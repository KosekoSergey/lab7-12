#include <string>
#include <iostream>

using namespace std;

#pragma once

class Device {
protected:
	string name;  //название устройства
	int rate;  //частота
	int memory;  //пам€ть
	Device() {
		cout << "”стройство создано" << endl;
	}
};

class Ram : Device{
private:
	string name;  //название оперативной пам€ти
	int memory = 0;  // кол-во оперативной пам€ти
	int rate = 0;  //частота
public:
	Ram();  //конструктор без параметров
	Ram(string name);  //конструктор с одним параметром
	Ram(string name, int rate, int memory);  //конструктор со всеми пол€ми
	int check();  //проверка
	void print(); //вывод на экран характеристик
	string get_name();  //ф-ци€ получени€ названи€
	int get_rate();  //частоты
	int get_memory();  //объема пам€ти
	void set_name(string aname);  //ф-ци€ присвоени€ названи€
	void set_rate(int arate);  //частоты
	void set_memory(int amemory);  //объема пам€ти
	void input();  //¬вод с клавиатуры
	Ram& operator + (Ram& ram)  //перегрузка оператора +
	{
		memory = memory + ram.memory;
		return *this;
	}
	Ram operator ++()  //++x
	{
		memory++;
		return *this;
	}
	Ram operator ++(int s)  //x++
	{
		Ram ram = *this;
		memory++;
		return ram;
	}
	Ram operator =(const Ram& temp) {  //оператор присваивани€
		copy(temp);
		return *this;
	}
	void copy(const Ram& temp);  //функци€ копировани€
};


