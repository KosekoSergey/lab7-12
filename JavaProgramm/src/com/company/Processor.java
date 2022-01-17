package com.company;

import java.util.*;

public class Processor {

    String name;  //название процессора
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

    public String getName() {  //метод получения названия процессора
        return name;
    }

    public int getRate() {  //частоты
        return rate;
    }

    public int getBitness() {  //разрядности
        return bitness;
    }

    public void setName(String name) {  //метод присвоения названия процессора
        this.name = name;
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
