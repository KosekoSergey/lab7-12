#pragma once
#include <string>
#include <iostream>

using namespace std;

class Videocard {
private:
	string name;  //�������� ����������
	int rate = 0; //�������
	int memory = 0;  //����� �����������
public:
	Videocard();  //����������� ��� ����������
	Videocard(string name);  //����������� � ����� ����������
	Videocard(string aname, int arate, int amemory);  //����������� �� ����� ������
	int check();  //�������� ����������
	void print();  //����� �� ����� �������������
	string get_name();  //�-��� ��������� �������� ����������
	int get_rate();  //�������
	int get_memory();  //������ �����������
	void set_name(string aname);  //�-��� ���������� �������� ����������
	void set_rate(int arate);  //�������
	void set_memory(int amemory);  //������ �����������
	void input();  //���� � ����������
};

