// A fintech company is developing a unified digital payment platform that supports multiple payment
// methods. The development team has already designed the following base structure:
// class PaymentMethod
// {
// public:
//  virtual void authenticate() = 0;
//  virtual void processPayment(double amount) = 0;
// };
// class OnlinePayment : public PaymentMethod
// {
// public:
//  void authenticate()
//  {
//  cout << "Authenticating online payment credentials" << endl;
//  }
// };
// class CardPayment : public PaymentMethod
// {
// public:
//  void processPayment(double amount)
//  {
//  cout << "Processing card payment of Rs." << amount << endl;
//  }
// };
// The payment platform must support a new hybrid payment method called SmartWallet which combines
// features of both online authentication and card-based payment processing. The final program should:
//  Represent the SmartWallet payment method using appropriate inheritance relationships.
//  Ensure the payment system can handle different payment types through a common payment
// interface.
//  Demonstrate how authentication and payment processing occur for the SmartWallet method.
//  Provide a reusable mechanism that can execute payment operations without knowing the exact
// payment type at compile time.
//  Clearly show that the correct payment behavior is selected dynamically at runtime. 
#include <iostream>
using namespace std;

class PaymentMethod
{
public:
    virtual void authenticate() = 0;
    virtual void processPayment(double amount) = 0;
};

class OnlinePayment : public PaymentMethod
{
public:
    void authenticate()
    {
        cout << "Authenticating online payment credentials" << endl;
    }
    void processPayment(double amount)
    {
        cout << "Processing online payment of Rs." << amount << endl;
    }
};

class CardPayment : public PaymentMethod
{
public:
    void authenticate()
    {
        cout << "Authenticating card payment credentials" << endl;
    }
    void processPayment(double amount)
    {
        cout << "Processing card payment of Rs." << amount << endl;
    }
};

class SmartWallet : public OnlinePayment, public CardPayment
{
public:
    void authenticate()
    {
        OnlinePayment::authenticate();
        CardPayment::authenticate();
    }
    void processPayment(double amount)
    {
        OnlinePayment::processPayment(amount);
        CardPayment::processPayment(amount);
    }
};

void executePayment(PaymentMethod* paymentMethod, double amount)
{
    paymentMethod->authenticate();
    paymentMethod->processPayment(amount);
}

int main()
{
    SmartWallet smartWallet;
    executePayment(&smartWallet, 1000.0);
    cout << "Payment processed successfully using SmartWallet!" << endl;

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}
