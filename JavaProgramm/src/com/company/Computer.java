package com.company;

public class Computer {

    static int count = 0; //кол-во компьютеров
    String name = "Без названия";  //название компьютера
    Processor processor = new Processor();  //процессор
    Ram ram = new Ram();  //оперативная память
    Videocard videocard = new Videocard();  //видеокарта
    Motherboard motherboard = new Motherboard();  //материнская плата
    int state = 0;  //состояние компбютера(0 - выключен)

    public Computer() {
        count = ++count;
    }

    public Computer(String name, Processor processor, Ram ram, Videocard videocard, Motherboard motherboard) {  //конструктор
        this.name = name;
        this.processor = processor;
        this.ram = ram;
        this.videocard = videocard;
        this.motherboard = motherboard;
        count = ++count;
    }

    public void turnon() {  //включить компьютер
        if (state == 0) {
            state = 1;
            System.out.println("Компьютер включен: " + name);
        }
        else System.out.println("Компьютер уже включен: " + name);
    }

    public void turnoff() {  //выключить компьютер
        if (state == 1) {
            state = 0;
            System.out.println("Компьютер выключен: " + name);
        }
    }

    public void check() {  //проверить и вывести состовляющие компьютера на экран
        if (state == 1) {
            System.out.println("Компьютер: " + name);
            System.out.println("Основные компоненты и их характеристики:");
            if (motherboard.check() == 1) motherboard.print();
            else System.out.println("Материнская плата отсутствует");
            if (processor.check() == 1) processor.print();
            else System.out.println("Процессор отсутствует");
            if (ram.check() == 1) ram.print();
            else System.out.println("Оперативная память отсутствует");
            if (videocard.check() == 1) videocard.print();
            else System.out.println("Видеокарта отсутствует");
            System.out.println();
        }
    }

    public void setName(String name) {  //метод присвоения имени
        this.name = name;
    }

    public void setMotherboard(Motherboard motherboard) {  //метод присвоения материнской платы
        this.motherboard = motherboard;
    }

    public void setRam(Ram ram) {  //метод присвоения оперативной памяти
        this.ram = ram;
    }

    public void setVideocard(Videocard videocard) {  //метод присвоения видеокарты
        this.videocard = videocard;
    }

    public void setProcessor(Processor processor) {  //метод присвоения процессора
        this.processor = processor;
    }

    public static void SetCount(int a)  //установка кол-ва компьютеров
    {
        count = a;
    }
    public static void PrintCount()  //вывод кол-ва компьютеров
    {
        System.out.println("Количество компьютеров: " + count);
    }
    public static int GetCount()  //получение кол-ва компьютеров
    {
        return count;
    }
}
