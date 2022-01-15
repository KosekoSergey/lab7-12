package com.company;

import java.util.*;

public class Videocard {

    String name;  //название видеокарты
    int rate; //частота
    int memory;  //объем видеопамяти

    public Videocard() {}

    public Videocard(String myName, int myRate, int myMemory) {  //конструктор
        name = myName;
        rate = myRate;
        memory = myMemory;
    }

    public String getName() {  //метод получения названия видеокарты
        return name;
    }

    public int getRate() {  //частоты
        return rate;
    }

    public int getMemory() {  //объема видеопамяти
        return memory;
    }

    public void setName(String name) {  //метод присвоения названия видеокарты
        this.name = name;
    }

    public void setRate(int rate) {  //частоты
        this.rate = rate;
    }

    public void setMemory(int memory) {    //объема видеопамяти
        this.memory = memory;
    }

    public int check() {  //проверка видеокарты
        if (name == null) return 0;
        else return 1;
    }

    public void print() {
        System.out.println("Название видеокарты: " + name);
        System.out.println("Частота видеокарты: " + rate);
        System.out.println("Объем видеопамяти: " + memory);
    }

    public void unput() {
        Scanner inp = new Scanner(System.in);
        name = inp.nextLine();
        rate = inp.nextInt();
        memory = inp.nextInt();
        inp.close();
    }
}
