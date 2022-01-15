package com.company;

import java.util.*;

public class Ram {

    String name;  //название оперативной памяти
    int rate; //частота
    int memory;  //объем памяти

    public Ram() {}

    public Ram(String myName, int myRate, int myMemory) {  //конструктор
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