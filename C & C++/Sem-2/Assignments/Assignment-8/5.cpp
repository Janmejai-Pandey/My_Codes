#include <iostream>
#include <cstring>
using namespace std;

class ShoppingCart;
class Order;

class Account
{
    int id;
    ShoppingCart *cart;
    Order *orders;
    int orderCount;

public:
    Account(int i)
    {
        id = i;
        cart = nullptr;
        orders = nullptr;
        orderCount = 0;
    }

    ~Account()
    {
        delete cart;
        delete[] orders;
    }

    void setCart(ShoppingCart *c)
    {
        cart = c;
    }

    void addOrder(Order o);

    void display();
};

class Customer
{
    int id;
    Account *account;

public:
    Customer(int i, Account *acc)
    {
        id = i;
        account = acc;
    }

    ~Customer()
    {
        delete account;
    }

    void display()
    {
        cout << "Customer: " << id << endl;
    }
};

class WebUser
{
    char *login;
    char *state;
    ShoppingCart *cart;

public:
    WebUser(char *l, char *s)
    {
        login = new char[strlen(l) + 1];
        strcpy(login, l);
        state = new char[strlen(s) + 1];
        strcpy(state, s);
        cart = nullptr;
    }

    ~WebUser()
    {
        delete[] login;
        delete[] state;
    }

    void setCart(ShoppingCart *c)
    {
        cart = c;
    }

    void display()
    {
        cout << "WebUser: " << login << " State: " << state << endl;
    }
};

class Product
{
    char *name;

public:
    Product(char *n = "Generic Product")
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    ~Product()
    {
        delete[] name;
    }

    void display()
    {
        cout << "Product: " << name << endl;
    }
};

class ShoppingCart
{
    Product *products;
    int count;

public:
    ShoppingCart()
    {
        products = nullptr;
        count = 0;
    }

    ~ShoppingCart()
    {
        delete[] products;
    }

    void addProduct(Product p)
    {
        Product *temp = new Product[count + 1];
        for (int i = 0; i < count; i++)
            temp[i] = products[i];

        temp[count] = p;
        delete[] products;
        
        products = temp;
        count++;
    }

    void display()
    {
        for (int i = 0; i < count; i++)
            products[i].display();
    }
};

class Payment
{
    char *type;

public:
    Payment(char *t)
    {
        type = new char[strlen(t) + 1];
        strcpy(type, t);
    }

    ~Payment()
    {
        delete[] type;
    }

    void display()
    {
        cout << "Payment: " << type << endl;
    }
};

class Order
{
    char *id;
    Payment *payment;

public:
    Order()
    {
        id = nullptr;
        payment = nullptr;
    }

    Order(char *i, Payment *p)
    {
        id = new char[strlen(i) + 1];
        strcpy(id, i);
        payment = p;
    }

    ~Order()
    {
        delete[] id;
    }

    void display()
    {
        cout << "Order: " << id << endl;
        if (payment)
            payment->display();
    }
};

void Account::addOrder(Order o)
{
    Order *temp = new Order[orderCount + 1];
    for (int i = 0; i < orderCount; i++)
        temp[i] = orders[i];
    temp[orderCount] = o;
    delete[] orders;
    orders = temp;
    orderCount++;
}

void Account::display()
{
    cout << "Account: " << id << endl;
    if (cart)
        cart->display();
    for (int i = 0; i < orderCount; i++)
        orders[i].display();
}

int main()
{
    Account *acc = new Account(1);
    Customer c(1, acc);

    ShoppingCart *cart = new ShoppingCart();
    acc->setCart(cart);

    WebUser w("user1", "active");
    w.setCart(cart);

    Product p1("Phone");
    Product p2("Laptop");

    cart->addProduct(p1);
    cart->addProduct(p2);

    Payment pay("Card");
    Order o1("O1", &pay);

    acc->addOrder(o1);

    c.display();
    w.display();
    acc->display();

    return 0;
}