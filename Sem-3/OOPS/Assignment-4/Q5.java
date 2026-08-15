class BankAccount {
    String accountNumber;
    String accountType;
    double balance;

    BankAccount(String accountNumber, String accountType, double balance) {
        this.accountNumber = accountNumber;
        this.accountType = accountType;
        this.balance = balance;
    }

    void displayAccountDetails() {
        System.out.println("Account Number: " + accountNumber);
        System.out.println("Account Type: " + accountType);
        System.out.println("Balance: Rs." + balance);
    }
}

class Customer {
    int customerId;
    String customerName;
    BankAccount account;

    Customer(int customerId, String customerName) {
        this.customerId = customerId;
        this.customerName = customerName;
    }

    void assignAccount(BankAccount account) {
        this.account = account;
    }

    void displayCustomerDetails() {
        System.out.println("-- Customer Details --");
        System.out.println("Customer ID: " + customerId);
        System.out.println("Customer Name: " + customerName);

        if (account != null) {
            System.out.println("\nBank Account Details:");
            account.displayAccountDetails();
        }
        else {
            System.out.println("No bank account assigned.");
        }
    }
}

public class Q5 {
    public static void main(String[] args) {

        Customer customer = new Customer(1, "Janmejai Pandey");
        BankAccount account = new BankAccount("ACC1001", "Savings", 25000);

        customer.assignAccount(account);
        customer.displayCustomerDetails();

        System.out.println("\nJanmejai Pandey - 2501030199 - B4");
    }
}