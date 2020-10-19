//Q5. create a class demomaths having method Square , cube which will take float value and return square and cube of a number.

using System;
namespace ConsoleApplication1
{
    class demomaths 
    {
        
        float val;
        float val2;
        float squire(float val1)
        {
            val=val1;
            float sqr=val*val;
            return sqr;
        }

        float cube(float val3)
        {
            val2=val3;
            float cb=val2*val2*val2;
            return cb;
        }
        static void Main(string[] args)
        {
          demomaths dm=new demomaths();
            //dm.squire(2);
            //dm.cube(2);

            Console.WriteLine(dm.squire(2));
            Console.WriteLine(dm.cube(2));
            Console.ReadLine();
        }
    }  
}
