#include <string>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include "computer.h"
#include "processor.h"
#include "ram.h"
#include "videocard.h"
#include "motherboard.h"
using namespace std;

int main() {
    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    setlocale(LC_ALL, "Rus");

    /*Ram ram1;
    Videocard vc1;
    Motherboard mb1;
    Processor proc1;
    mb1.init("Материнская плата-1", 1200, 8);
    proc1.init("Видеокарта-1", 3200, 64);
    ram1.init("Оперативная память-1", 1600, 8);
    vc1.init("Видеокарта-1", 2400, 2);
    Computer comp[2];
    comp[0].init_computer("Компьютер-1", proc1, ram1, vc1, mb1);  //создание 1 компьютера
    comp[0].turn_on();
    emergency_turn_off(comp[0]);
    comp[0].turn_on();  //включение 1 компьютера
    comp[0].check();  //проверка 1 компьютера
    comp[1].turn_on();  //включение 2 компьютера
    comp[1].check();  //проверка 2 компьютера
    comp[1].set_processor(proc1);  //присвоение процессора 1 компьютеру 2
    ram1.set_rate(2200);  //изменение характеристик оперативной памяти 1
    comp[1].set_ram(ram1);  //присвоение оперативной памяти 1 компьютеру 2
    comp[0].check();  //проверка 1 компьютера
    comp[1].check();  //проверка 2 компьютера */          //работа 7
    
    /*Computer::print_count();
    Computer::set_count(2);
    Computer::print_count();*/         //работа 8

    /*Ram ram1;
    Ram ram2("ОП-1");
    Ram ram3("Оперативная память-1", 1600, 8);
    ram1.print();
    ram2.print();
    ram3.print();
    ram1 = ram3;
    ram2.copy(ram3);
    ram3.set_memory(10);
    ram1.print();
    ram2.print();
    ram3.print();*/              //работа 19

    /*Videocard vc;
    vc.input();
    vc.print();*/

    Videocard vc[3];
    for (int i = 0; i < 3; i++)
    {
        vc[i] = *new Videocard("Видеокарта " + to_string(i + 1), i + 1, i + 1);
        vc[i].print();
    }
    Videocard vc1[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            vc1[i][j] = *new Videocard("Видеокарта " + to_string(i * 2 + j + 1), i * i + j + 1, i * j + 1);
            vc1[i][j].print();
        }
    }
}