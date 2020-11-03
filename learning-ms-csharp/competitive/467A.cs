using System;

class Prgram
{
    public static void Main()
    {
        uint number = Convert.ToUInt32(Console.ReadLine());
        int count = 0;
        for (int i = 0; i < number; i++)
        {   
            int[,] a = new int[1,1];
            var temp = Console.ReadLine().Split(' ');
            a[0,0] = int.Parse(temp[0]);
            a[0,1] = int.Parse(temp[1]);
            if (a[0,0]<a[0,1])
            {
                if (a[0,1]-a[0,0] >= 2) 
                {
				    count++;
			    }
            }
        }

        Console.WriteLine(count);

    }
}