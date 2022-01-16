using System;
using System.Collections.Generic;
using System.Text;

namespace Programm
{
    class Videocard
    {
        private string name;  //название видеокарты
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
        private int memory;  //объем видеопамяти
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

        public Videocard() { }
        public Videocard(string name, int rate, int memory)  //конструктор
        {
            Name = name;
            Rate = rate;
            Memory = memory;
        }
        public int Check()  //проверка видеокарты
        {
            if (name == null) return 0;
            else return 1;
        }
        public void Print() //вывод информации о видеокарте
        {
            Console.WriteLine("Название видеокарты: " + name);
            Console.WriteLine("Частота видеокарты: " + rate);
            Console.WriteLine("Объем видеопамяти: " + memory);
        }
        public void Input()  //метод ввода с клавиатуры
        {
            Console.WriteLine("Введите название видеокарты: ");
            Name = Console.ReadLine();
            Console.WriteLine("Введите частоту видеокарты и объем видеопамяти: ");
            string[] s1;
            string s = Console.ReadLine();
            s1 = s.Split(new char[] { ' ', '\t' }, StringSplitOptions.RemoveEmptyEntries);
            Rate = Convert.ToInt32(s1[0]);
            Memory = Convert.ToInt32(s1[1]);
        }
    }
}
