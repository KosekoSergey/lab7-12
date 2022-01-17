#include "Motherboard.h"

void Motherboard::init(string aname, int arate, int aslots) {  //�������� ����������� �����
	name = aname;
	num_of_slots = aslots;
	rate = arate;
}

int Motherboard::check() {  //��������
	if (name.length() != 0) return 1;
	else return 0;
}

void Motherboard::print() {  //����� �� ����� �������������
	cout << "�������� ����������� �����: " << name << endl;
	cout << "������� ����: " << rate << endl;
	cout << "���������� �������� ��������: " << num_of_slots << endl;
}

string Motherboard::get_name() {  //�-��� ��������� ��������
	return name;
}

int Motherboard::get_rate() {  //�������
	return rate;
}

int Motherboard::get_slots() {  //���-�� ��������
	return num_of_slots;
}

void Motherboard::set_name(string aname) {  //�-��� ���������� ��������
	name = name;
}

void Motherboard::set_rate(int arate) {  //�������
	rate = rate;
}

void Motherboard::set_slots(int aslots) {  //���-�� ��������
	num_of_slots = aslots;
}

void Motherboard::input() {  //���� � ����������
	cin >> name;
	cin >> rate;
	cin >> num_of_slots;
}