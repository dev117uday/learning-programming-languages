using System;

using BankAccount;

namespace OOP101
{
    class Program
    {
        public static void Main()
        {
            Console.WriteLine("Hello World");

            Account account1 = CreateNewAccount();
            account1.PrintDetails();

        }
        public static Account CreateNewAccount()
        {
            Console.WriteLine("Enter Name : ");
            string name = Console.ReadLine();
            Console.WriteLine("Enter Amount : ");
            decimal initialAmount = Convert.ToDecimal(Console.ReadLine());
            Console.WriteLine("Enter unique : ");
            string UniqueID = Console.ReadLine();

            Account newAccount = new Account(name,initialAmount,UniqueID);
            return newAccount;
        }
        
    }
    
}
