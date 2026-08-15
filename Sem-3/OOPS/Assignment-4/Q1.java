class Reservation {
    String customerName;
    int numberOfGuests;
    double costPerPerson;
    String reservationType;

    Reservation(String customerName, int numberOfGuests, double costPerPerson, String reservationType) {
        this.customerName = customerName;
        this.numberOfGuests = numberOfGuests;
        this.costPerPerson = costPerPerson;
        this.reservationType = reservationType;
    }

    void displayDetails() {
        double foodBill = numberOfGuests * costPerPerson;
        double discount = 0;
        double decorationCharge = 0;

        if (numberOfGuests > 10) {
            discount = foodBill * 0.12;
        }

        if (reservationType.equalsIgnoreCase("Outdoor")) {
            decorationCharge = 500;
        }

        double finalAmount = foodBill - discount + decorationCharge;

        System.out.println("-- Reservation Details --");
        System.out.println("Customer Name: " + customerName);
        System.out.println("Number of Guests: " + numberOfGuests);
        System.out.println("Cost Per Person: Rs." + costPerPerson);
        System.out.println("Reservation Type: " + reservationType);
        System.out.println("Food Bill: Rs." + foodBill);
        System.out.println("Discount: Rs." + discount);
        System.out.println("Decoration: Rs." + decorationCharge);
        System.out.println("Final Amount: Rs." + finalAmount);
    }
}

public class Q1 {
    public static void main(String[] args) {
        Reservation r = new Reservation("Rahul", 12, 800, "Outdoor");
        r.displayDetails();

        System.out.println("\nJanmejai Pandey - 2501030199 - B4");
    }
}