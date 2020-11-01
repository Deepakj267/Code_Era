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
    public class Message
    {
        public void email(int ts, int bns, string nm)
        {
            Console.WriteLine("E-mail : Total Salary : {0} Bonus={1} name={2}", ts, bns, nm);
        }
        public void mobile(int ts, int bns, string nm)
        {
            Console.WriteLine("\tMobile : Total Salary : {0} Bonus={1} name={2}", ts, bns, nm);
        }
    }
}
