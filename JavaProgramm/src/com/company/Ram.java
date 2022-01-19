package com.company;

import java.util.*;

class Device {
    protected String name;  //название устройства

    protected int rate;  //частота

    protected int memory;  //память

    protected Device() {
        System.out.println("Устройство создано");
        }
    public void Print() {}
}

public class Ram extends Device{

    String name;  //название оперативной памяти
    int rate; //частота
    int memory;  //объем памяти

    public Ram() {}  //конструктор без параметров

    public Ram(String name)  //конструктор с одним параметром
    {
        this.name = name;
    }

    public Ram(String myName, int myRate, int myMemory) {  //конструктор со всеми параметрами
        name = myName;
        rate = myRate;
        memory = myMemory;
    }

    public String getName() {  //метод получения названия оперативной памяти
        return name;
    }

    public int getRate() {  //частоты
        return rate;
    }

    public int getMemory() {  //объема памяти
        return memory;
    }

    public void setName(String name) {  //метод присвоения названия оперативной памяти
        this.name = name;
    }

    public void setRate(int rate) {  //частоты
        this.rate = rate;
    }

    public void setMemory(int memory) {    //объема памяти
        this.memory = memory;
    }

    public int check() {  //проверка оперативной памяти
        if (name == null) return 0;
        else return 1;
    }

    public void print() {
        System.out.println("Название оперативной памяти: " + name);
        System.out.println("Частота оперативной памяти: " + rate);
        System.out.println("Объем оперативной памяти: " + memory);
    }

    public void unput() {  //Ввод с клавиатуры
        Scanner inp = new Scanner(System.in);
        name = inp.nextLine();
        rate = inp.nextInt();
        memory = inp.nextInt();
        inp.close();
    }
}