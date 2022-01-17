using System;
using System.Collections.Generic;
using System.Text;

namespace Programm
{
    class Computer
    {
        private static int count = 0;  //количество компьютеров
        private string name = "Без названия";  //название компьютера
        public string Name
        {
            get
            {
                return name;
            }
            set
            {
                if (value != null) name = value;
            }
        }
        private Processor processor = new Processor();  //процессор
        public Processor Processor
        {
            set
            {
                if (value != null) processor = value;
            }
        }
        private Ram ram = new Ram();  //оперативная память
        public Ram Ram
        {
            set
            {
                if (value != null) ram = value;
            }
        }
        private Videocard videocard = new Videocard();  //видеокарта
        public Videocard Videocard
        {
            set
            {
                if (value != null) videocard = value;
            }
        }
        private Motherboard motherboard = new Motherboard();  //материнская плата
        public Motherboard Motherboard
        {
            set
            {
                if (value != null) motherboard = value;
            }
        }
        private int state = 0;  //состояние компбютера(0 - выключен)
        public int State
        {
            get
            {
                return state;
            }
            set
            {
                switch (value)
                {
                    case 1: state = 1; break;
                    default: state = 0; break;
                }
            }
        }
        public Computer() { }  //конструктор без параметров
        public Computer(string name)  //конструктор с одним параметром
        {
            Name = name;
        }
        public Computer(string name, Processor processor, Ram ram, Videocard videocard, Motherboard motherboard)  //конструктор со всеми параметрами
        {
            this.name = name;
            this.processor = processor;
            this.ram = ram;
            this.videocard = videocard;
            this.motherboard = motherboard;
        }
        public void TurnOn()
        {  //включить компьютер
            if (state == 0)
            {
                State = 1;
                Console.WriteLine("Компьютер включен: " + name);
            }
            else Console.WriteLine("Компьютер уже включен: " + name);
        }
        public void TurnOff()  //выключить компьютер
        {
            if (state == 1)
            {
                state = 0;
                Console.WriteLine("Компьютер выключен: " + name);
            }
        }
        public void Check()  //проверить и вывести состовляющие компьютера на экран
        {
            if (state == 1)
            {
                Console.WriteLine("Компьютер: " + name);
                Console.WriteLine("Основные компоненты и их характеристики:");
                if (motherboard.Check() == 1) motherboard.Print();
                else Console.WriteLine("Материнская плата отсутствует");
                if (processor.Check() == 1) processor.Print();
                else Console.WriteLine("Процессор отсутствует");
                if (ram.Check() == 1) ram.Print();
                else Console.WriteLine("Оперативная память отсутствует");
                if (videocard.Check() == 1) videocard.Print();
                else Console.WriteLine("Видеокарта отсутствует");
                Console.WriteLine();
            }
        }
        public static void SetCount(int a)  //установка кол-ва компьютеров
        {
            count = a;
        }
        public static void PrintCount()  //вывод кол-ва компьютеров
        {
            Console.WriteLine("Количество компьютеров: " + count);
        }
        public static int GetCount()  //получение кол-ва компьютеров
        {
            return count;
        }
    }
}
