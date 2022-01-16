using System;
using System.Collections.Generic;
using System.Text;

namespace Programm
{
    class Motherboard
    {
        private string name;  //название материнской платы
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
        private int numOfSlots;  //кол-во разъемов
        public int NumOfSlots
        {
            get
            {
                return numOfSlots;
            }
            set
            {
                if (value > 0) numOfSlots = value;
            }
        }

        public Motherboard() { }
        public Motherboard(string name, int rate, int numOfSlots)  //конструктор
        {
            Name = name;
            Rate = rate;
            NumOfSlots = numOfSlots;
        }
        public int Check()  //проверка материнской платы
        {
            if (name == null) return 0;
            else return 1;
        }
        public void Print() //вывод информации о материнской плате
        {
            Console.WriteLine("Название материнской платы: " + name);
            Console.WriteLine("Частота материнской платы: " + rate);
            Console.WriteLine("Количество основных разъемов материнской платы: " + numOfSlots);
        }
        public void Input()  //метод ввода с клавиатуры
        {
            Console.WriteLine("Введите название материнской платы: ");
            Name = Console.ReadLine();
            Console.WriteLine("Введите частоту и кол-во основных разъемов материнской платы: ");
            string[] s1;
            string s = Console.ReadLine();
            s1 = s.Split(new char[] { ' ', '\t' }, StringSplitOptions.RemoveEmptyEntries);
            Rate = Convert.ToInt32(s1[0]);
            NumOfSlots = Convert.ToInt32(s1[1]);
        }
    }
}
