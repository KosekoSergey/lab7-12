#pragma once
#include <string>
#include <iostream>
#include "motherboard.h"
#include "processor.h"
#include "ram.h"
#include "videocard.h"

using namespace std;

class Computer
{
private:
	string name = "Без названия";  //название компьютера
	Processor processor;  //процессор
	Ram ram;  //оперативная память
	Videocard videocard;  //видеокарта
	Motherboard motherboard;  //материнская плата
	int state = 0;  //состояние компбютера(0 - выключен)
	static int count;
public:
	void init_computer(string name, Processor processor, Ram ram, Videocard videocard, Motherboard motherboard);  //создание компьютера
	void turn_on();  //включить компьютер
	void turn_off();  //выключить компьютер
	void check();  //проверить и вывести состовляющие компьютера на экран
	void set_name(string name);  //ф-ция присвоения имени
	void set_motherboard(Motherboard motherboard);  //ф-ция присвоения материнской платы
	void set_ram(Ram ram);  //ф-ция присвоения оперативной памяти
	void set_videocard(Videocard videocard);  //ф-ция присвоения видеокарты
	void set_processor(Processor processor);  //ф-ция присвоения процессора
	friend void emergency_turn_off(Computer comp);  //пример дружественной функции
	static void print_count();  //вывод кол-ва компьютеров
	static void set_count(int a);  //установка кол-ва компьютеров
	static int get_count();  //получение кол-ва компьютеров
};



