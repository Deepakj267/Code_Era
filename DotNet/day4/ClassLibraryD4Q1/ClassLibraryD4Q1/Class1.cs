using System;

namespace ClassLibraryD4Q1
{
    public class account
    {
        private int id;
        private String Name;
        private double balanceamt=1000;

        public account(int id, string Name)
        {
            this.id = id;
            this.Name = Name;
        }
        public void deposite(double amt)
        {
            balanceamt = balanceamt + amt;
            Console.WriteLine("balance deposited={0}", amt);
            Console.WriteLine("total balance ={0}", balanceamt);
        }
        public void withdrow(double wval)
        {
            balanceamt = balanceamt - wval;
            Console.WriteLine("balance withdrow={0}", wval);
            Console.WriteLine("total balance ={0}", balanceamt);
        }
    }
}