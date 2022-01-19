using System;
using System.Collections.Generic;
using System.Text;

namespace Programm
{
    public interface ICloneable
    {
        object Clone();        
    }
    abstract class Pdevice
    {
        protected string name;  
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
    }
    class Processor : Pdevice, ICloneable
    {
        public object Clone()
        {
            return new Processor(Name, Rate, Bitness);
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
        private int bitness;  //разрядность процессора
        public int Bitness
        {
            get
            {
                return bitness;
            }
            set
            {
                if (value > 0) bitness = value;
            }
        }

        public Processor() { }  //конструктор без параметров
        public Processor(string name)  //конструктор с одним параметром
        {
            Name = name;
        }
        public Processor(string name, int rate, int bitness)  //конструктор со всеми параметрами
        {
            Name = name;
            Rate = rate;
            Bitness = bitness;
        }
        public int Check()  //проверка процессора
        {
            if (name == null) return 0;
            else return 1;
        }
        public void Print() //вывод информации о процессоре
        {
            Console.WriteLine("Название процессора: " + name);
            Console.WriteLine("Частота процессора: " + rate);
            Console.WriteLine("Разрядность процессора: " + bitness);
        }
        public void Input()  //метод ввода с клавиатуры
        {
            Console.WriteLine("Введите название процессора: ");
            Name = Console.ReadLine();
            Console.WriteLine("Введите частоту и разрядность процессора: ");
            string[] s1;
            string s = Console.ReadLine();
            s1 = s.Split(new char[] { ' ', '\t' }, StringSplitOptions.RemoveEmptyEntries);
            Rate = Convert.ToInt32(s1[0]);
            Bitness = Convert.ToInt32(s1[1]);
        }
    }
}
