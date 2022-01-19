#include "Processor.h"

Processor::Processor() {}  //����������� ��� ����������

Processor::Processor(string name) {  //����������� � ����� ����������
	this->name = name;
}

Processor::Processor(string aname, int arate, int abitness) {  //����������� �� ����� ������
	name = aname;
	bitness = abitness;
	rate = arate;
}

int Processor::check() {  //��������
	if (name.length() != 0) return 1;
	else return 0;
}

void Processor::print() {  //����� �� ����� �������������
	cout << "�������� ����������: " << name << endl;
	cout << "������� ����������: " << rate << endl;
	cout << "����������� ����������: " << bitness << endl;
}

string Processor::get_name() {  //�-��� ��������� ��������
	return name;
}

void Processor::set_name(string aname) {  //�-��� ���������� ��������
	name = aname;
}

int Processor::get_rate() {  //�������
	return rate;
}

int Processor::get_bitness() {  //�����������
	return bitness;
}

void Processor::set_rate(int arate) {  //�������
	rate = arate;
}

void Processor::set_bitness(int abitness) {  //�����������
	bitness = abitness;
}

void Processor::input() {  //���� � ����������
	cin >> name;
	cin >> rate;
	cin >> bitness;
}