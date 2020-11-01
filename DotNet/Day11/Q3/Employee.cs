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
    public class PermanenteEmployee : Employee
    {
        public PermanenteEmployee(string pnm, int psal) : base(pnm, psal)
        {  }
        public override void GiveBonus()
        {
            int Pbns = (int)(Salary * 0.2);
            Salary = (int)(Salary + Pbns);
            OnGiveBonus(Salary, Pbns, Name);

        }
    }
}
