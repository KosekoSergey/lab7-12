#pragma once
#include <string>
#include <iostream>
#include "motherboard.h"
#include "processor.h"
#include "ram.h"
#include "videocard.h"

using namespace std;

class Computer
{
private:
	string name = "��� ��������";  //�������� ����������
	Processor processor;  //���������
	Ram ram;  //����������� ������
	Videocard videocard;  //����������
	Motherboard motherboard;  //����������� �����
	int state = 0;  //��������� ����������(0 - ��������)
	static int count;
public:
	void init_computer(string name, Processor processor, Ram ram, Videocard videocard, Motherboard motherboard);  //�������� ����������
	void turn_on();  //�������� ���������
	void turn_off();  //��������� ���������
	void check();  //��������� � ������� ������������ ���������� �� �����
	void set_name(string name);  //�-��� ���������� �����
	void set_motherboard(Motherboard motherboard);  //�-��� ���������� ����������� �����
	void set_ram(Ram ram);  //�-��� ���������� ����������� ������
	void set_videocard(Videocard videocard);  //�-��� ���������� ����������
	void set_processor(Processor processor);  //�-��� ���������� ����������
	friend void emergency_turn_off(Computer comp);  //������ ������������� �������
	static void print_count();  //����� ���-�� �����������
	static void set_count(int a);  //��������� ���-�� �����������
	static int get_count();  //��������� ���-�� �����������
};



