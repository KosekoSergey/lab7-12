#include "Processor.h"

void processor::init(string aname, int arate, int abitness) {  //�������� ����������
	name = aname;
	bitness = abitness;
	rate = arate;
}

int processor::check() {  //��������
	if (name.length() != 0) return 1;
	else return 0;
}

void processor::print() {  //����� �� ����� �������������
	cout << "�������� ����������: " << name << endl;
	cout << "������� ����������: " << rate << endl;
	cout << "����������� ����������: " << bitness << endl;
}

string processor::get_name() {  //�-��� ��������� ��������
	return name;
}

int processor::get_rate() {  //�������
	return rate;
}

int processor::get_bitness() {  //�����������
	return bitness;
}

void processor::set_name(string aname) {  //�-��� ���������� ��������
	name = aname;
}

void processor::set_rate(int arate) {  //�������
	rate = arate;
}

void processor::set_bitness(int abitness) {  //�����������
	bitness = abitness;
}

void processor::input() {  //���� � ����������
	cin >> name;
	cin >> rate;
	cin >> bitness;
}