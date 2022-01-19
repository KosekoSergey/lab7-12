#include <string>
#include <iostream>

using namespace std;

#pragma once

class Device {
protected:
	string name;  //�������� ����������
	int rate;  //�������
	int memory;  //������
	Device() {
		cout << "���������� �������" << endl;
	}
};

class Ram : Device{
private:
	string name;  //�������� ����������� ������
	int memory = 0;  // ���-�� ����������� ������
	int rate = 0;  //�������
public:
	Ram();  //����������� ��� ����������
	Ram(string name);  //����������� � ����� ����������
	Ram(string name, int rate, int memory);  //����������� �� ����� ������
	int check();  //��������
	void print(); //����� �� ����� �������������
	string get_name();  //�-��� ��������� ��������
	int get_rate();  //�������
	int get_memory();  //������ ������
	void set_name(string aname);  //�-��� ���������� ��������
	void set_rate(int arate);  //�������
	void set_memory(int amemory);  //������ ������
	void input();  //���� � ����������
	Ram& operator + (Ram& ram)  //���������� ��������� +
	{
		memory = memory + ram.memory;
		return *this;
	}
	Ram operator ++()  //++x
	{
		memory++;
		return *this;
	}
	Ram operator ++(int s)  //x++
	{
		Ram ram = *this;
		memory++;
		return ram;
	}
	Ram operator =(const Ram& temp) {  //�������� ������������
		copy(temp);
		return *this;
	}
	void copy(const Ram& temp);  //������� �����������
};


