package com.company;

import java.util.*;

public class Motherboard {

    String name;  //название материнской платы
    int rate; //частота
    int numOfSlots;  //кол-во разъемов

    public Motherboard() {}  //конструктор без параметров

    public Motherboard(String name)  //конструктор с одним параметром
    {
        this.name = name;
    }

    public Motherboard(String myName, int myRate, int myNumOfSlots) {  //конструктор со всеми параметрами
        name = myName;
        rate = myRate;
        numOfSlots = myNumOfSlots;
    }

    public String getName() {  //метод получения названия материнской платы
        return name;
    }

    public int getRate() {  //частоты
        return rate;
    }

    public int getNumOfSlots() {  //кол-ва разъемов
        return numOfSlots;
    }

    public void setName(String name) {  //метод присвоения названия материнской платы
        this.name = name;
    }

    public void setRate(int rate) {  //частоты
        this.rate = rate;
    }

    public void setNumOfSlots(int numOfSlots) {    //кол-ва разъемов
        this.numOfSlots = numOfSlots;
    }

    public int check() {  //проверка материнской платы
        if (name == null) return 0;
        else return 1;
    }

    public void print() {
        System.out.println("Название материнской платы: " + name);
        System.out.println("Частота материнской платы: " + rate);
        System.out.println("Количество основных разъемов: " + numOfSlots);
    }

    public void unput() {  //Ввод с клавиатуры
        Scanner inp = new Scanner(System.in);
        name = inp.nextLine();
        rate = inp.nextInt();
        numOfSlots = inp.nextInt();
        inp.close();
    }
}
