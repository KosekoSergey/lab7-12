#include <string>
#include <iostream>

using namespace std;

#pragma once

class Processor {
private:
	string name;  //�������� ����������
	int rate = 0;  //�������
	int bitness = 0;  //����������� ����������
public:
	void init(string aname, int arate, int abitness);  //�������� ����������
	int check();  //��������
	void print();  //����� �� ����� �������������
	string get_name();  //�-��� ��������� ��������
	int get_rate();  //�������
	int get_bitness();  //�����������
	void set_name(string aname);  //�-��� ���������� ��������
	void set_rate(int arate);  //�������
	void set_bitness(int abitness);  //�����������
	void input();  //���� � ����������
};

