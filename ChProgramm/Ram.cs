using System;
using System.Collections.Generic;
using System.Text;

namespace Programm
{
    interface IPrint
    {
        void Print(string name, int rate, int memory)
        {
            Console.WriteLine("Название: " + name);
            Console.WriteLine("Частота: " + rate);
            Console.WriteLine("Объем памяти: " + memory);
        }
    };
    class Device : IPrint
    {
        protected string name;  //название устройства
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
        protected int rate;  //частота
        public int Rate  //частот
        {
            get
            {
                return rate;
            }
            set
            {
                if (value > 0) rate = value;
            }
        }
        protected int memory;  //память
        public int Memory  //объем оперативной памяти
        {
            get
            {
                return memory;
            }
            set
            {
                if (value > 0) memory = value;
            }
        }
        protected Device()
        {
            Console.WriteLine("Устройство создано");
        }
        public virtual void Print()
        {
            Console.WriteLine("Название устройства: " + name);
            Console.WriteLine("Частота устройства: " + rate);
            Console.WriteLine("Объем памяти устройства: " + memory);
        }
    }
    class Ram : Device, IPrint
    {
        public Ram() { }  //конструктор без параметров
        public Ram(string name)  //конструктор с одним параметром
        {
            Name = name;
        }
        public Ram(string name, int rate, int memory)  //конструктор со всеми параметрами
        {
            Name = name;
            Rate = rate;
            Memory = memory;
        }
        public int Check()  //проверка оперативной памяти
        {
            if (name == null) return 0;
            else return 1;
        }
        public override void Print() //вывод информации об оперативной памяти
        {
            Console.WriteLine("Название оперативной памяти: " + name);
            Console.WriteLine("Частота оперативной памяти: " + rate);
            Console.WriteLine("Объем оперативной памяти: " + memory);
        }
        public void Input()  //метод ввода с клавиатуры
        {
            Console.WriteLine("Введите название оперативной памяти: ");
            Name = Console.ReadLine();
            Console.WriteLine("Введите частоту и объем оперативной памяти: ");
            string[] s1;
            string s = Console.ReadLine();
            s1 = s.Split(new char[] { ' ', '\t' }, StringSplitOptions.RemoveEmptyEntries);
            Rate = Convert.ToInt32(s1[0]);
            Memory = Convert.ToInt32(s1[1]);
        }
        public static Ram operator +(Ram ram1, Ram ram2)
        {
            return new Ram { Rate = ram1.Rate + ram2.Rate, Memory = ram1.Memory + ram2.Memory };
        }
        public static Ram operator ++(Ram ram)
        {
            return new Ram { Rate = ram.Rate++, Memory = ram.Memory++ };
        }
    }
}
