#include "Computer.h"

void computer::init_computer(string aname, processor aprocessor, ram aram, videocard avideocard, motherboard amotherboard) {  //�������� ����������
	name = aname;
	processor1 = aprocessor;
	ram1 = aram;
	videocard1 = avideocard;
	motherboard1 = amotherboard;
}

void computer::turn_on() {  //�������� ���������
	if (state == 0) { state = 1; cout << "��������� �������: " << name << endl; }
	else cout << "��������� ��� �������: " << name << endl;
}

void computer::turn_off() {  //��������� ���������
	if (state == 1) { state = 0; cout << "��������� ��������: " << name << endl; }
}

void computer::check() {  //��������� � ������� ������������ ���������� �� �����
	if (state == 1) {
		cout << "���������: " << name << endl;
		cout << "�������� ���������� � �� ��������������:" << endl;
		if (motherboard1.check()) motherboard1.print();
		else cout << "����������� ����� �����������" << endl;
		if (processor1.check()) processor1.print();
		else cout << "��������� �����������" << endl;
		if (ram1.check()) ram1.print();
		else cout << "����������� ������ �����������" << endl;
		if (videocard1.check()) videocard1.print();
		else cout << "���������� �����������" << endl;
		cout << endl;
	}
}

void computer::set_name(string aname) {  //�-��� ���������� �����
	name = aname;
}

void computer::set_motherboard(motherboard amotherboard) {  //�-��� ���������� ����������� �����
	motherboard1 = amotherboard;
}

void computer::set_ram(ram aram) {  //�-��� ���������� ����������� ������
	ram1 = aram;
}

void computer::set_videocard(videocard avideocard) {  //�-��� ���������� ����������
	videocard1 = avideocard;
}

void computer::set_processor(processor aprocessor) {  //�-��� ���������� ����������
	processor1 = aprocessor;
}