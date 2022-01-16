using System;
using System.Collections.Generic;
using System.Text;

namespace Programm
{
    class Ram
    {
        private string name;  //название оперативной памяти
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
        private int rate; //частота
        public int Rate
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
        private int memory;  //объем оперативной памяти
        public int Memory
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

        public Ram() { }
        public Ram(string name, int rate, int memory)  //конструктор
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
        public void Print() //вывод информации об оперативной памяти
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
    }
}
