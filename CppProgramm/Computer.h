#pragma once
#include <string>
#include <iostream>
#include "motherboard.h"
#include "processor.h"
#include "ram.h"
#include "videocard.h"

using namespace std;

class computer
{
private:
	string name = "��� ��������";  //�������� ����������
	processor processor1;  //���������
	ram ram1;  //����������� ������
	videocard videocard1;  //����������
	motherboard motherboard1;  //����������� �����
	int state = 0;  //��������� ����������(0 - ��������)
public:
	void init_computer(string aname, processor aprocessor, ram aram, videocard avideocard, motherboard amotherboard);  //�������� ����������
	void turn_on();  //�������� ���������
	void turn_off();  //��������� ���������
	void check();  //��������� � ������� ������������ ���������� �� �����
	void set_name(string aname);  //�-��� ���������� �����
	void set_motherboard(motherboard amotherboard);  //�-��� ���������� ����������� �����
	void set_ram(ram aram);  //�-��� ���������� ����������� ������
	void set_videocard(videocard avideocard);  //�-��� ���������� ����������
	void set_processor(processor aprocessor);  //�-��� ���������� ����������
};

