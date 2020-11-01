/*3. create class  Employee having member id, name, salary.
 * Id should be autoincrement.
 * Write getter setter for name and salary.
 * Write abstract method givebonus.
 * Create two child class Permanente employee and temporary employee.
 * Create array of employee class store two object of class Permanente employee 
 * and temporary employee. As soon as you call givebonus it should send message stating total salary ,bonus and name. 
 */

using System;
namespace Employee
{
    public delegate void gb(int n, int sal, string nm);
    public abstract class Employee
    {
        public event gb gbevent;
        static int getid;
        int id;
        string name;
        int salary;
        public Employee(string nm, int sal)
        {
            id = ++getid;
            Name = nm;
            Salary = sal;
        }
       /* public int ID
        {
            get { return id; }
        }*/
        public string Name
        {
            get { return name; }
            set { name = value; }
        }
        public int Salary
        {
            get { return salary; }
            protected set { salary = value; }
        }
        public void OnGiveBonus(int Salary, int bonus, string name)
        {
            if (gbevent != null)
                gbevent(Salary, bonus, name);
        }
        public abstract void GiveBonus();
    }
}
