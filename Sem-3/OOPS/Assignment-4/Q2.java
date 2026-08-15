class Consumer {
    int consumerId;
    String consumerName;
    int units;

    Consumer(int consumerId, String consumerName, int units) {
        this.consumerId = consumerId;
        this.consumerName = consumerName;
        this.units = units;
    }

    void displayConsumerDetails() {
        System.out.println("Consumer ID: " + consumerId);
        System.out.println("Consumer Name: " + consumerName);
        System.out.println("Units Consumed: " + units);
    }
}

class DomesticConsumer extends Consumer {

    DomesticConsumer(int consumerId, String consumerName, int units) {
        super(consumerId, consumerName, units);
    }

    double calculateBill() {
        double bill;

        if (units <= 100) {
            bill = units * 4;
        }
        else if (units <= 300) {
            bill = (100 * 4) + ((units - 100) * 6);
        }
        else {
            bill = (100 * 4) + (200 * 6) + ((units - 300) * 8);
        }

        return bill;
    }

    void displayBill() {
        double bill = calculateBill();
        double surcharge = 0;

        if (bill > 5000) {
            surcharge = bill * 0.05;
        }

        double finalAmount = bill + surcharge;

        System.out.println("\n-- Domestic Consumer --");
        displayConsumerDetails();
        System.out.println("Bill Amount: Rs." + bill);
        System.out.println("Surcharge: Rs." + surcharge);
        System.out.println("Final Amount: Rs." + finalAmount);
    }
}

class CommercialConsumer extends Consumer {

    CommercialConsumer(int consumerId, String consumerName, int units) {
        super(consumerId, consumerName, units);
    }

    double calculateBill() {
        double bill;

        if (units <= 100) {
            bill = units * 6;
        } else if (units <= 300) {
            bill = (100 * 6) + ((units - 100) * 8);
        } else {
            bill = (100 * 6) + (200 * 8) + ((units - 300) * 10);
        }

        return bill;
    }

    void displayBill() {
        double bill = calculateBill();
        double surcharge = 0;

        if (bill > 5000) {
            surcharge = bill * 0.05;
        }

        double finalAmount = bill + surcharge;

        System.out.println("\n-- Commercial Consumer --");
        displayConsumerDetails();
        System.out.println("Bill Amount: Rs." + bill);
        System.out.println("Surcharge: Rs." + surcharge);
        System.out.println("Final Amount: Rs." + finalAmount);
    }
}

public class Q2 {
    public static void main(String[] args) {

        DomesticConsumer d = new DomesticConsumer(101, "Jai", 350);

        CommercialConsumer c = new CommercialConsumer(102, "Mac Pvt Ltd", 600);

        d.displayBill();
        c.displayBill();
        System.out.println("\nJanmejai Pandey - 2501030199 - B4");
    }
}