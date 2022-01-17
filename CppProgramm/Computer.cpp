#include "Computer.h"

void Computer::init_computer(string name, Processor processor, Ram ram, Videocard videocard, Motherboard motherboard) {  //�������� ����������
	this->name = name;
	this->processor = processor;
	this->ram = ram;
	this->videocard = videocard;
	this->motherboard = motherboard;
}

void Computer::turn_on() {  //�������� ���������
	if (state == 0) { state = 1; cout << "��������� �������: " << name << endl; }
	else cout << "��������� ��� �������: " << name << endl;
}

void Computer::turn_off() {  //��������� ���������
	if (state == 1) { state = 0; cout << "��������� ��������: " << name << endl; }
}

void Computer::check() {  //��������� � ������� ������������ ���������� �� �����
	if (state == 1) {
		cout << "���������: " << name << endl;
		cout << "�������� ���������� � �� ��������������:" << endl;
		if (motherboard.check()) motherboard.print();
		else cout << "����������� ����� �����������" << endl;
		if (processor.check()) processor.print();
		else cout << "��������� �����������" << endl;
		if (ram.check()) ram.print();
		else cout << "����������� ������ �����������" << endl;
		if (videocard.check()) videocard.print();
		else cout << "���������� �����������" << endl;
		cout << endl;
	}
}

void Computer::set_name(string name) {  //�-��� ���������� �����
	this->name = name;
}

void Computer::set_motherboard(Motherboard motherboard) {  //�-��� ���������� ����������� �����
	this->motherboard = motherboard;
}

void Computer::set_ram(Ram ram) {  //�-��� ���������� ����������� ������
	this->ram = ram;
}

void Computer::set_videocard(Videocard videocard) {  //�-��� ���������� ����������
	this->videocard = videocard;
}

void Computer::set_processor(Processor processor) {  //�-��� ���������� ����������
	this->processor = processor;
}

void emergency_turn_off(Computer comp) {
	comp.state = 0;
	cout << "��������� ��������� ��������";
}

int Computer::count = 0;

void Computer::print_count() {  //����� ���-�� �����������
	cout << "���������� �����������: " << count << endl;
}

void Computer::set_count(int a) {  //��������� ���-�� �����������
	count = a;
}

int Computer::get_count() { //��������� ���-�� �����������
	return count;
}