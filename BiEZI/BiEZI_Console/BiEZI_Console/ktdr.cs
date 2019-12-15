using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BiEZI_ktdr
{
    class ktdr //który to dzień roku
    {
        static void Main(string[] args)
        {
            //Console.WriteLine("WriteLine\n");
            //Console.ReadLine();

            int rok, mc, dz; // rok, miesiąc, dzień
            int dzr=1; //dzień roku
            Boolean prz = false; //rok przestępny

            Console.Write("Podaj rok: ");
            rok = int.Parse(Console.ReadLine());

            do
            {
                Console.Write("Podaj miesiąc: ");
                mc = int.Parse(Console.ReadLine());
            } while (mc < 0 || mc > 12);

            do
            {
                Console.Write("Podaj dzień: ");
                dz = int.Parse(Console.ReadLine());
            } while (dz < 0);

            if (rok % 4 == 0) prz = true;
            if (rok % 100 == 0 && rok % 400 != 0) prz = false;
            if ((mc > 2) && (prz == true)) dzr++;

            switch (mc)
            {
                case 1:
                    dzr = dz;
                    break;
                case 2:
                    dzr = dz + 31;
                    break;
                case 3:
                    dzr = dz + 31 + 28;
                    break;
                case 4:
                    dzr = dz +31 + 28 + 31;
                    break;
                case 5:
                    dzr = dz + 31 + 28 + 31 + 30;
                    break;
                case 6:
                    dzr = dz + 31 + 28 + 31 + 30 + 31;
                    break;
                case 7:
                    dzr = dz + 31 + 28 + 31 + 30 + 31 + 30;
                    break;
                case 8:
                    dzr = dz + 31 + 28 + 31 + 30 + 31 + 30 + 31;
                    break;
                case 9:
                    dzr = dz + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
                    break;
                case 10:
                    dzr = dz + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
                    break;
                case 11:
                    dzr = dz + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
                    break;
                case 12:
                    dzr = dz + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
                    break;
                default:
                    Console.WriteLine("Nieprawidłowa wartość miesiąca, podany miesiąc nie istenienie w znanym mi kalendarzu.");
                    break;
            }

            Console.WriteLine("Podana data to {0} dzień roku.", dzr);
            Console.ReadKey();
        }
    }
}
