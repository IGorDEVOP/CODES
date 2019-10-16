using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PraticandoFatorial
{
    class Program
    {
        
        static void Main(string[] args)
        {
            int fatorial = 1;
            for(int i=1; i < 8; i++)
            {
                fatorial *= i;


                Console.WriteLine(" o fatorial é " + i + " = " + fatorial);
            }





            Console.WriteLine("Essa aplicação ja se encerrou. Tecle enter para sair . . ."); 
            Console.ReadLine();

        }
    }
}
