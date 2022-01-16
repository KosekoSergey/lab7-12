#include "Motherboard.h"

void motherboard::init(string aname, int arate, int aslots) {  //�������� ����������� �����
	name = aname;
	num_of_slots = aslots;
	rate = arate;
}

int motherboard::check() {  //��������
	if (name.length() != 0) return 1;
	else return 0;
}

void motherboard::print() {  //����� �� ����� �������������
	cout << "�������� ����������� �����: " << name << endl;
	cout << "������� ����: " << rate << endl;
	cout << "���������� �������� ��������: " << num_of_slots << endl;
}

string motherboard::get_name() {  //�-��� ��������� ��������
	return name;
}

int motherboard::get_rate() {  //�������
	return rate;
}

int motherboard::get_slots() {  //���-�� ��������
	return num_of_slots;
}

void motherboard::set_name(string aname) {  //�-��� ���������� ��������
	name = name;
}

void motherboard::set_rate(int arate) {  //�������
	rate = rate;
}

void motherboard::set_slots(int aslots) {  //���-�� ��������
	num_of_slots = aslots;
}

void motherboard::input() {  //���� � ����������
	cin >> name;
	cin >> rate;
	cin >> num_of_slots;
}