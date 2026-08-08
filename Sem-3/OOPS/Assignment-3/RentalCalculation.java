class Vehicle {
    int rentalDays;
    String vehicleNumber;

    Vehicle(int days, String vNo) {
        rentalDays = days;
        vehicleNumber = vNo;
    }
}

class Car extends Vehicle {
    int amount;

    Car(int days, String vNo) {
        super(days, vNo);
    }

    void calcAmount(){
        amount = 60 * rentalDays;
    }

    void displayInfo(){
        System.out.println(" -- Car Rental --");
        System.out.println("Vehicle Number: " + vehicleNumber);
        System.out.println("Rental Days: " + rentalDays);
        System.out.println("Rental Amount: " + amount);
    }
}

class Bike extends Vehicle {
    int amount;

    Bike(int days, String vNo) {
        super(days, vNo);
    }

    void calcAmount(){
        amount = 25 * rentalDays;
    }

    void displayInfo(){
        System.out.println(" -- Bike Rental --");
        System.out.println("Vehicle Number: " + vehicleNumber);
        System.out.println("Rental Days: " + rentalDays);
        System.out.println("Rental Amount: " + amount);
    }
}

public class RentalCalculation {
    public static void main(String[] args) {
        Car c1 = new Car(12, "UK 03 7771");
        Bike b1 = new Bike(15, "UK 01 8287");

        c1.calcAmount();
        c1.displayInfo();

        b1.calcAmount();
        b1.displayInfo();
    }
}