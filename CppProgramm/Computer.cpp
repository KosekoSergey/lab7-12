#include "Computer.h"

void Computer::init_computer(string name, Processor processor, Ram ram, Videocard videocard, Motherboard motherboard) {  //создание компьютера
	this->name = name;
	this->processor = processor;
	this->ram = ram;
	this->videocard = videocard;
	this->motherboard = motherboard;
}

void Computer::turn_on() {  //включить компьютер
	if (state == 0) { state = 1; cout << "Компьютер включен: " << name << endl; }
	else cout << "Компьютер уже включен: " << name << endl;
}

void Computer::turn_off() {  //выключить компьютер
	if (state == 1) { state = 0; cout << "Компьютер выключен: " << name << endl; }
}

void Computer::check() {  //проверить и вывести состовляющие компьютера на экран
	if (state == 1) {
		cout << "Компьютер: " << name << endl;
		cout << "Основные компоненты и их характеристики:" << endl;
		if (motherboard.check()) motherboard.print();
		else cout << "Материнская плата отсутствует" << endl;
		if (processor.check()) processor.print();
		else cout << "Процессор отсутствует" << endl;
		if (ram.check()) ram.print();
		else cout << "Оперативная память отсутствует" << endl;
		if (videocard.check()) videocard.print();
		else cout << "Видеокарта отсутствует" << endl;
		cout << endl;
	}
}

void Computer::set_name(string name) {  //ф-ция присвоения имени
	this->name = name;
}

void Computer::set_motherboard(Motherboard motherboard) {  //ф-ция присвоения материнской платы
	this->motherboard = motherboard;
}

void Computer::set_ram(Ram ram) {  //ф-ция присвоения оперативной памяти
	this->ram = ram;
}

void Computer::set_videocard(Videocard videocard) {  //ф-ция присвоения видеокарты
	this->videocard = videocard;
}

void Computer::set_processor(Processor processor) {  //ф-ция присвоения процессора
	this->processor = processor;
}

void emergency_turn_off(Computer comp) {
	comp.state = 0;
	cout << "Компьютер экстренно выключен";
}

int Computer::count = 0;

void Computer::print_count() {  //вывод кол-ва компьютеров
	cout << "Количество компьютеров: " << count << endl;
}

void Computer::set_count(int a) {  //установка кол-ва компьютеров
	count = a;
}

int Computer::get_count() { //получение кол-ва компьютеров
	return count;
}