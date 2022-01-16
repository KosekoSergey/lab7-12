using System;

namespace Programm
{
	class Program
	{
		static void Main(string[] args)
		{
			Motherboard mb1 = new Motherboard("Материнская плата-1", 1200, 8);
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
			comps[1].Check();
		}
	}
}