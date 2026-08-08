class InterestCalculator {
    double principal;
    double rate;
    double time;

    double calculateSimpleInterest() {
        return (principal * rate * time) / 100;
    }

    double calculateTotalAmount() {
        return principal + calculateSimpleInterest();
    }

    void displayDetails() {
        System.out.println("-- Interest Calculation --");
        System.out.println("Principal Amount: " + principal);
        System.out.println("Rate of Interest: " + rate + "%");
        System.out.println("Time Period: " + time + " years");
        System.out.println("Simple Interest: " + calculateSimpleInterest());
        System.out.println("Total Amount: " + calculateTotalAmount());
    }
}

public class SimpleInterestCalculator {
    public static void main(String[] args) {

        InterestCalculator interest = new InterestCalculator();

        interest.principal = 50000;
        interest.rate = 8;
        interest.time = 2;

        interest.displayDetails();
    }
}