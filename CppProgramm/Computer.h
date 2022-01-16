#pragma once
#include <string>
#include <iostream>
#include "motherboard.h"
#include "processor.h"
#include "ram.h"
#include "videocard.h"

using namespace std;

class computer
{
private:
	string name = "Без названия";  //название компьютера
	processor processor1;  //процессор
	ram ram1;  //оперативная память
	videocard videocard1;  //видеокарта
	motherboard motherboard1;  //материнская плата
	int state = 0;  //состояние компбютера(0 - выключен)
public:
	void init_computer(string aname, processor aprocessor, ram aram, videocard avideocard, motherboard amotherboard);  //создание компьютера
	void turn_on();  //включить компьютер
	void turn_off();  //выключить компьютер
	void check();  //проверить и вывести состовляющие компьютера на экран
	void set_name(string aname);  //ф-ция присвоения имени
	void set_motherboard(motherboard amotherboard);  //ф-ция присвоения материнской платы
	void set_ram(ram aram);  //ф-ция присвоения оперативной памяти
	void set_videocard(videocard avideocard);  //ф-ция присвоения видеокарты
	void set_processor(processor aprocessor);  //ф-ция присвоения процессора
};

