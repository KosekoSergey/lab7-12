package com.company;

public class Main {
    public static void main(String[] args) {
        /*Motherboard mb1 = new Motherboard("Материнская плата-1", 1200, 8);
        Videocard vc1 = new Videocard("Видеокарта-1", 3200, 64);
        Ram ram1 = new Ram("Оперативная память-1", 1600, 8);
        Processor proc1 = new Processor("Процессор-1", 2400, 2);
        Computer [] comps = new Computer[2];
        comps[0] = new Computer("Компьютер-1", proc1, ram1, vc1, mb1);
        comps[0].turnon();
        comps[0].check();
        comps[1] = new Computer();
        comps[1].turnon();
        comps[1].check();
        comps[1].setProcessor(proc1);
        ram1.setRate(2200);
        comps[1].setRam(ram1);
        comps[0].check();
        comps[1].check();*/

        /*Computer comp = new Computer();
        Computer.PrintCount();
        Computer.SetCount(2);
        Computer.PrintCount();*/

        /*Ram ram1 = new Ram();
        Ram ram2 = new Ram("ВК-1");
        Ram ram3 = new Ram("Видеокарта-1", 3200, 64);
        ram1.print();
        ram2.print();
        ram3.print();
        Ram[] rams = new Ram[3];
        for (int i = 0; i < 3; i++)
        {
            rams[i] = new Ram("Видеокарата-" + i);
            rams[i].print();
        }*/

        Videocard vc = new Videocard();
        vc.input();
        vc.print();
    }
}
