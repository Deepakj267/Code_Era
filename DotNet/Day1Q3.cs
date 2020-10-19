Q3. Declare a variable of a type float and print square of it after storing it in to a variable.

using System;
namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            float val = 10.5f;
            float sqr = val*val;
           
            Console.WriteLine(sqr);
            Console.ReadLine();
        }
    }  
}
