package com.company;

import java.util.*;

interface ICloneable
{
    public Object Clone() throws CloneNotSupportedException;
}

public class Videocard implements ICloneable {

    String name;  //название видеокарты
    int rate; //частота
    int memory;  //объем видеопамяти

    public Videocard Clone() throws CloneNotSupportedException {
        return (Videocard) super.clone();
    }

    public Videocard() {}  //конструктор без параметров

    public Videocard(String name)  //конструктор с одним параметром
    {
        this.name = name;
    }

    public Videocard(String myName, int myRate, int myMemory) {  //конструктор со всеми параметрами
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

    public void input() {
        Scanner inp = new Scanner(System.in);
        System.out.println("Введите название видеокарты: ");
        name = inp.nextLine();
        do
        {
            System.out.println("Введите частоту видеокарты: ");
            try
            {
                rate = inp.nextInt();
                if (rate <= 0)
                {
                    rate = -1;
                    throw new Exception("Данное значение должно быть больше 0");
                }
            }
            catch (Exception e)
            {
                System.out.println(e.getMessage());
            }
        } while (rate == -1);

        do
        {
            System.out.println("Введите объем видеопамяти: ");
            try
            {
                memory = inp.nextInt();
                if (memory <= 0)
                {
                    memory = -1;
                    throw new Exception("Данное значение должно быть больше 0");
                }
            }
            catch (Exception e)
            {
                System.out.println(e.getMessage());
            }
        } while (memory == -1);

        /*Scanner inp = new Scanner(System.in);
        name = inp.nextLine();
        rate = inp.nextInt();
        memory = inp.nextInt();*/
        inp.close();
    }
}
