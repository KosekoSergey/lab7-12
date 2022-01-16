#include <string>
#include <iostream>

using namespace std;

#pragma once

class ram {
private:
	string name;  //�������� ����������� ������
	int memory = 0;  // ���-�� ����������� ������
	int rate = 0;  //�������
public:
	void init(string aname, int arate, int amemory);  //�������� ����������� ������
	int check();  //��������
	void print(); //����� �� ����� �������������
	string get_name();  //�-��� ��������� ��������
	int get_rate();  //�������
	int get_memory();  //������ ������
	void set_name(string aname);  //�-��� ���������� ��������
	void set_rate(int arate);  //�������
	void set_memory(int amemory);  //������ ������
	void input();  //���� � ����������
};
