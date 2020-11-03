using System;

namespace BankAccount 
{
    public class Account
    {
        public string UniqueID { get; }
        public string Owner { get; set; }   
        public decimal Balance { get; set; }    

        public Account(string name, decimal initialBalance, string uid)
        {
            this.Owner = name;
            this.Balance = initialBalance;
            this.UniqueID = uid;
        }

        public void PrintDetails() 
        {
            Console.WriteLine("Name of Account Holder : " + this.Owner);
            Console.WriteLine("Current Amount : " + this.Balance);
            Console.WriteLine("Current Amount : " + this.UniqueID);
        }
        
        public void MakeDeposit(decimal amount,DateTime date, string note)
        {

        }
        public void MakeWithdrawal(decimal amount,DateTime date,string note)
        {

        }

    }
};