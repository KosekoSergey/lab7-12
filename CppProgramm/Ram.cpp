#include "Ram.h"

void ram::init(string aname, int arate, int amemory) {  //�������� ����������� ������
	name = aname;
	rate = arate;
	memory = amemory;
}

int ram::check() {  //��������
	if (name.length() != 0) return 1;
	else return 0;
}

void ram::print() {  //����� �� ����� �������������
	cout << "�������� ����������� ������: " << name << endl;
	cout << "������� ����������� ������: " << rate << endl;
	cout << "����� ����������� ������: " << memory << endl;
}

string ram::get_name() {  //�-��� ��������� ��������
	return name;
}

int ram::get_rate() {  //�������
	return rate;
}

int ram::get_memory() {  //������ ������
	return memory;
}

void ram::set_name(string aname) {  //�-��� ���������� ��������
	name = aname;
}

void ram::set_rate(int arate) {  //�������
	rate = arate;
}

void ram::set_memory(int amemory) {  //������ ������
	memory = amemory;
}

void ram::input() {  //���� � ����������
	cin >> name;
	cin >> memory;
	cin >> rate;
}