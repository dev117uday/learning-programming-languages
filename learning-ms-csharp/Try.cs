using System;

namespace Try
{
    class Program
    {
        public static void Main()
        {
            int number;
            number = Convert.ToInt32(Console.ReadLine());
            if (number == 2) {
                Console.WriteLine("NO");
            } else if ( number%2 == 0 ) {
                Console.WriteLine("YES");
            } else {
                Console.WriteLine("NO");
            }
        }
    }
}