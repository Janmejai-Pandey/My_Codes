class Product {
    int productId;
    String productName;
    int quantity;
    double pricePerUnit;

    double calculateBill() {
        return quantity * pricePerUnit;
    }

    void displayDetails() {
        System.out.println("-- Product Bill --");
        System.out.println("Product ID: " + productId);
        System.out.println("Product Name: " + productName);
        System.out.println("Quantity: " + quantity);
        System.out.println("Price Per Unit: " + pricePerUnit);
        System.out.println("Total Bill: " + calculateBill());
    }
}

public class ProductBillingSystem {
    public static void main(String[] args) {

        Product p1 = new Product();

        p1.productId = 101;
        p1.productName = "Laptop";
        p1.quantity = 2;
        p1.pricePerUnit = 55000.00;

        p1.displayDetails();
    }
}