#include "Videocard.h"

Videocard::Videocard() {}  //����������� ��� ����������

Videocard::Videocard(string name) {  //����������� � ����� ����������
	this->name = name;
}

Videocard::Videocard(string aname, int arate, int amemory) {  //����������� �� ����� ������
	name = aname;
	rate = arate;
	memory = amemory;
}

int Videocard::check() {  //�������� ����������
	if (name.length() != 0) return 1;
	else return 0;
}

void Videocard::print() {  //����� �� ����� �������������
	cout << "�������� ����������: " << name << endl;
	cout << "������� ����������: " << rate << endl;
	cout << "����� �����������: " << memory << endl;
}

string Videocard::get_name() {  //�-��� ��������� �������� ����������
	return name;
}

int Videocard::get_rate() {  //�������
	return rate;
}

int Videocard::get_memory() {  //������ �����������
	return memory;
}

void Videocard::set_name(string aname) {  //�-��� ���������� �������� ����������
	name = aname;
}

void Videocard::set_rate(int arate) {  //�������
	rate = arate;
}

void Videocard::set_memory(int amemory) {    //������ �����������
	memory = amemory;
}

void Videocard::input() {  //���� � ����������
	cin >> name;
	cin >> rate;
	cin >> memory;
}