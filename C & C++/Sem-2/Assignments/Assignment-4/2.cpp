#include<bits/stdc++.h>
using namespace std;

class Product
{
private:
    double price;
    int quantity;
public:
    Product(double p, int q):price(p), quantity(q){};
    ~Product(){};

    friend class Billing;
    friend void calculateTotal(Product, Product);
};

class Billing
{
private:
    double taxRate;
    double discountRate;
public:
    Billing(double tax, double discount):taxRate(tax), discountRate(discount){};
    ~Billing(){};

    double apply(double amount)
    {
        double final;
        final = amount + (amount * taxRate / 100);
        final = final - (final * discountRate / 100);
        return final;
    }
};

void calculateTotal(Product p1, Product p2)
{
    double total = (p1.price * p1.quantity) + (p2.price * p2.quantity);
    cout << "Total cost before tax and discount: " << total << endl;

    Billing bill(5.0, 10.0);
    double finalAmount = bill.apply(total);
    cout << "Final amount after tax and discount: " << finalAmount << endl;
}

int main()
{
    Product prod1(100, 2);
    Product prod2(150, 3);

    calculateTotal(prod1, prod2);

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}