#include <string>
#include <iostream>

using namespace std;

#pragma once

class Pdevice {
public: 
	virtual string get_name() = 0;
	virtual void set_name(string name) = 0;
};

class Processor : Pdevice
{
private:
	string name;
	int rate = 0;  //�������
	int bitness = 0;  //����������� ����������
public:
	Processor();  //����������� ��� ����������
	Processor(string name);  //����������� � ����� ����������
	Processor(string aname, int arate, int abitness);  //����������� �� ����� ������
	string get_name();
	void set_name(string name);
	int check();  //��������
	void print();  //����� �� ����� �������������
	int get_rate();  //�������
	int get_bitness();  //�����������
	void set_rate(int arate);  //�������
	void set_bitness(int abitness);  //�����������
	void input();  //���� � ����������
};

