package com.company;

import java.util.*;

abstract class Pdevice
{
    protected String name;
    public String getName() {  //метод получения названия процессора
        return name;
    }
    public void setName(String name) {  //метод присвоения названия процессора
        this.name = name;
    }
}

public class Processor extends Pdevice{

    int rate; //частота
    int bitness;  //разрядность процессора

    public Processor() {}  //конструктор без параметров

    public Processor(String name)  //конструктор с одним параметром
    {
        this.name = name;
    }

    public Processor(String myName, int myRate, int myBitness) {  //конструктор со всеми параметрами
        name = myName;
        rate = myRate;
        bitness = myBitness;
    }

    public int getRate() {  //частоты
        return rate;
    }

    public int getBitness() {  //разрядности
        return bitness;
    }

    public void setRate(int rate) {  //частоты
        this.rate = rate;
    }

    public void setMemory(int bitness) {  //разрядности
        this.bitness = bitness;
    }

    public int check() {  //проверка процессора
        if (name == null) return 0;
        else return 1;
    }

    public void print() {
        System.out.println("Название процессора: " + name);
        System.out.println("Частота процессора: " + rate);
        System.out.println("Разрядность процессора: " + bitness);
    }

    public void unput() {  //Ввод с клавиатуры
        Scanner inp = new Scanner(System.in);
        name = inp.nextLine();
        rate = inp.nextInt();
        bitness = inp.nextInt();
        inp.close();
    }
}
