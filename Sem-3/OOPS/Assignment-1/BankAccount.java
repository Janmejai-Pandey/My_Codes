// Program 1: Design a Bank Account Management System using Java. Create a class
// BankAccount that stores the following details:
//  Account Number
//  Account Holder Name
//  Current Balance
// The system should provide methods to:
// 1. Deposit money into the account.
// 2. Withdraw money after checking whether sufficient balance is available.
// 3. Display the current account balance.
// 4. Display complete account details.
//  Prevent withdrawal if the requested amount exceeds the available balance.
//  Display appropriate messages for every successful or unsuccessful transaction.

public class BankAccount {
    long accNo;
    String name;
    double currBal;

    BankAccount(long accNo, String name, double currBal) {
        this.accNo = accNo;
        this.name = name;
        this.currBal = currBal;
    }

    void deposit(double amt) {
        currBal += amt;
        System.out.println("Deposited Rs." + amt);
        System.out.println("Current balance Rs." + currBal);
    }
    
    void withdraw(double amt) {
        if(currBal >= amt){
            currBal-=amt;
            System.out.println("Withdrawled ₹" + amt);            
            System.out.println("Current balance ₹" + currBal);
        }
        else {
            System.out.println("Insufficient Balance");
        }
    }

    void display() {
        System.out.println("Account Number :" + accNo);
        System.out.println("Name of Acc. Holder Rs." + name);
        System.out.println("Current Balance Rs." + currBal);
    }

    public static void main(String[] args) {
        BankAccount acc1 = new BankAccount(2501030199L, "Janmejai Pandey", 100000000);

        acc1.display();
        acc1.deposit(100002);
        acc1.withdraw(10000);
    }
}