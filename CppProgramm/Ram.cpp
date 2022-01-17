#include "Ram.h"

void Ram::init(string aname, int arate, int amemory) {  //�������� ����������� ������
	name = aname;
	rate = arate;
	memory = amemory;
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
