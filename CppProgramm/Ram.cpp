#include "Ram.h"

Ram::Ram() {}  //����������� ��� ����������

Ram::Ram(string name) {  //����������� � ����� ����������
	this->name = name;
}

Ram::Ram(string name, int rate, int memory) {  //����������� �� ����� ������
	this->name = name;
	this->rate = rate;
	this->memory = memory;
}

int Ram::check() {  //��������
	if (name.length() != 0) return 1;
	else return 0;
}

void Ram::print() {  //����� �� ����� �������������
	cout << "�������� ����������� ������: " << name << endl;
	cout << "������� ����������� ������: " << rate << endl;
	cout << "����� ����������� ������: " << memory << endl;
}

string Ram::get_name() {  //�-��� ��������� ��������
	return name;
}

int Ram::get_rate() {  //�������
	return rate;
}

int Ram::get_memory() {  //������ ������
	return memory;
}

void Ram::set_name(string aname) {  //�-��� ���������� ��������
	name = aname;
}

void Ram::set_rate(int arate) {  //�������
	rate = arate;
}

void Ram::set_memory(int amemory) {  //������ ������
	memory = amemory;
}

void Ram::input() {  //���� � ����������
	cin >> name;
	cin >> memory;
	cin >> rate;
}

void Ram::copy(const Ram& temp) {  //������� �����������
	name = temp.name;
	rate = temp.rate;
	memory = temp.memory;
}
