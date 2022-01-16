#include <string>
#include <iostream>

using namespace std;

#pragma once

class motherboard {
private:
	string name;  //�������� ����������� �����
	int rate = 0;  //�������
	int num_of_slots = 0;  //���-�� ��������
public:
	void init(string aname, int arate, int aslots);  //�������� ����������� �����
	int check();  //��������
	void print();  //����� �� ����� �������������
	string get_name();  //�-��� ��������� ��������
	int get_rate();  //�������
	int get_slots();  //���-�� ��������
	void set_name(string aname);  //�-��� ���������� ��������
	void set_rate(int arate);  //�������
	void set_slots(int aslots);  //���-�� ��������
	void input();  //���� � ����������
};

