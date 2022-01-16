#include "Videocard.h"

void videocard::init(string aname, int arate, int amemory) {  //�������� ����������
	name = aname;
	rate = arate;
	memory = amemory;
}

int videocard::check() {  //�������� ����������
	if (name.length() != 0) return 1;
	else return 0;
}

void videocard::print() {  //����� �� ����� �������������
	cout << "�������� ����������: " << name << endl;
	cout << "������� ����������: " << rate << endl;
	cout << "����� �����������: " << memory << endl;
}

string videocard::get_name() {  //�-��� ��������� �������� ����������
	return name;
}

int videocard::get_rate() {  //�������
	return rate;
}

int videocard::get_memory() {  //������ �����������
	return memory;
}

void videocard::set_name(string aname) {  //�-��� ���������� �������� ����������
	name = aname;
}

void videocard::set_rate(int arate) {  //�������
	rate = arate;
}

void videocard::set_memory(int amemory) {    //������ �����������
	memory = amemory;
}

void videocard::input() {  //���� � ����������
	cin >> name;
	cin >> rate;
	cin >> memory;
}