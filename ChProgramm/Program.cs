using System;

namespace Programm
{
	class Program
	{
		static void Main(string[] args)
		{
			/*Motherboard mb1 = new Motherboard("Материнская плата-1", 1200, 8);
			Videocard vc1 = new Videocard("Видеокарта-1", 3200, 64);
			Ram ram1 = new Ram("Оперативная память-1", 1600, 8);
			Processor proc1 = new Processor("Процессор-1", 2400, 2);
			Computer[] comps = new Computer[2];
			comps[0] = new Computer("Компьютер-1", proc1, ram1, vc1, mb1);
			comps[0].TurnOn();
			comps[0].Check();
			comps[1] = new Computer();
			comps[1].TurnOn();
			comps[1].Check();
			comps[1].Processor = proc1;
			ram1.Rate = 2200;
			comps[1].Ram = ram1;
			comps[0].Check();
			comps[1].Check();*/                          //работа 6

			/*Motherboard[] mb = new Motherboard[2];
			mb[0] = new Motherboard("Материнская плата-1", 1200, 8);
			mb[1] = new Motherboard();
			mb[1].Input();
			mb[0].Print();
			mb[1].Print();
			Ram ram1 = new Ram("Оперативная память-1", 1600, 8);
			Ram ram2 = new Ram("Оперативная память-2", 1400, 10);
			Ram ram3 = ram1 + ram2;
			ram3.Print();
			Ram ram4 = ram3++;
			ram4.Print();*/                          //работа 7

			/*Computer comp1 = new Computer();
			Computer.PrintCount();
			Computer.SetCount(2);
			Computer.PrintCount();*/                //работа 8

			/*Ram ram1 = new Ram();
			Ram ram2 = new Ram("ВК-1");
			Ram ram3 = new Ram("Видеокарта-1", 3200, 64);
			ram1.Print();
			ram2.Print();
			ram3.Print();
			Ram[] rams = new Ram[3];
			for (int i = 0; i < 3; i++)
            {
				rams[i] = new Ram("Видеокарата-" + i);
				rams[i].Print();
            }*/                                    //работа 9


			/*Videocard vc = new Videocard();
			vc.Input();
			vc.Print();*/

			Videocard[] vc = new Videocard[3];
			for (int i = 0; i<3; i++)
            {
				vc[i] = new Videocard("Видеокарта " + (i + 1), i + 1, i + 1);
				vc[i].Print();
            }
			Videocard[,] vc1 = new Videocard[2, 2];
			for (int i = 0; i < 2; i++)
            {
				for (int j = 0; j < 2; j++)
                {
					vc1[i, j] = new Videocard("Видеокарта " + (i * 2 + j + 1), i * i + j + 1, i * j + 1);
					vc1[i,j].Print();
				}
			}
		}
	}
}