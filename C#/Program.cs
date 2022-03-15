using System;

namespace Lab_9
{
    class point
    {
        public int x;
        public int y;
        public point()
        {
            x = 0;
            y = 0;
        }
        public point(int a)
        {
            x = a;
            y = 0;
        }
        public point(int a, int b)
        {
            x = a;
            y = b;
        }
    };
    class massive
    {
        public int[] data;
        public int Size;

        public massive(int size)
        {
            this.data = new int[size];
            this.Size = size;
            for (int i = 0; i < size; i++)
            {
                data[i] = i + 1;
            }
        } 
    };
internal class Program
    {
       
        static void Main(string[] args)
        {
            point a = new point();
            point b = new point(1);
            point c = new point(2,3);
            System.Console.WriteLine( "Staticheskie:\n" + a.x + "\t" + a.y + "\n" + b.x + "\t" + b.y + "\n" + c.x + "\t" + c.y);

            massive numbers = new massive(5);
            System.Console.WriteLine("\n\nDinamitchesky massive:");
            for (int i = 0; i < numbers.Size; i++)
            {
                System.Console.Write(numbers.data[i] + " ");
            }
            System.Console.WriteLine();
        }
    }
}
