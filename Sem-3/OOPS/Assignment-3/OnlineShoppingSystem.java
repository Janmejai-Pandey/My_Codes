class Product {
    int productId;
    String productName;
    int quantityPurchased;
    double pricePerUnit;

    Product(int productId, String productName, int quantityPurchased, double pricePerUnit) {
        this.productId = productId;
        this.productName = productName;
        this.quantityPurchased = quantityPurchased;
        this.pricePerUnit = pricePerUnit;
    }
}

class DiscountedProduct extends Product {
    double discountPercentage;
    double total;
    double discount;
    double finalAmt;

    DiscountedProduct(int productId, String productName, int quantityPurchased, double pricePerUnit, double discountPercentage) {
        super(productId, productName, quantityPurchased, pricePerUnit);
        this.discountPercentage = discountPercentage;
    }

    void calculateTotal() {
        total =  quantityPurchased * pricePerUnit;
    }

    void calculateDiscount() {
        discount = total * discountPercentage / 100;
    }

    void calculateFinal() {
        finalAmt =  total - discount;
    }

    void displayBill() {
        System.out.println("-- ONLINE SHOPPING BILL --");
        System.out.println("Product ID: " + productId);
        System.out.println("Product Name: " + productName);
        System.out.println("Quantity Purchased: " + quantityPurchased);
        System.out.printf("Price Per Unit: %.2f%n", pricePerUnit);
        System.out.printf("Total Amount: %.2f%n", total);
        System.out.printf("Discount (%.2f%%): %.2f%n", discountPercentage, discount);
        System.out.printf("Final Payable Amount: %.2f%n", finalAmt);
    }
}

public class OnlineShoppingSystem {
    public static void main(String[] args) {

        DiscountedProduct product = new DiscountedProduct(11, "Wireless Headphones", 2, 1500.00, 10.0);

        product.calculateTotal();
        product.calculateDiscount();
        product.calculateFinal();
        product.displayBill();
    }
}