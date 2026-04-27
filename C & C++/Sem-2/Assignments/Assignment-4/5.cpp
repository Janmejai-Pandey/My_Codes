#include <iostream>
using namespace std;

class Point
{
private:
    double x, y;
public:
    Point(){
        x = 0.0;
        y = 0.0;
    }
    Point(double xx, double yy){
        x = xx;
        y = yy;
    }
    Point(const Point &p){
        x = p.x;
        y = p.y;
    }
};

class Distance
{
private:
    int feet;
    double inches;
public:
    Distance(int f, int i):feet(f), inches(i){};
    friend void compare(Distance d1, Distance d2);
};

void compare(Distance d1, Distance d2) {
    double totalInches1 = d1.feet * 12 + d1.inches;
    double totalInches2 = d2.feet * 12 + d2.inches;

    if (totalInches1 > totalInches2) {
        cout << "Distance 1 is larger: " << d1.feet << " feet " << d1.inches << " inches" << endl;
    } else if (totalInches2 > totalInches1) {
        cout << "Distance 2 is larger: " << d2.feet << " feet " << d2.inches << " inches" << endl;
    } else {
        cout << "Both distances are equal." << endl;
    }
}

class Account
{
private:
    double balance;
    int accountNumber;
public:
    Account(int accNum, double bal):accountNumber(accNum), balance(bal){};
    friend void transferFunds(Account &from, Account &to, double amount);
};

void transferFunds(Account &from, Account &to, double amount) {
    if (from.balance >= amount) {
        from.balance -= amount;
        to.balance += amount;
        cout << "Transferred Rs." << amount << " from Account " << from.accountNumber
             << " to Account " << to.accountNumber << endl;
    } else {
        cout << "Insufficient funds in Account " << from.accountNumber << endl;
    }
}

class Time
{
public:
    int hours;
    int minutes;
    int seconds;
    Time(int h, int m, int s):hours(h), minutes(m), seconds(s){};
    friend Time addTime(Time t1, Time t2);
};

Time addTime(Time t1, Time t2) {
    int totalSeconds = t1.seconds + t2.seconds;

    int totalMinutes = t1.minutes + t2.minutes;
    totalMinutes += totalSeconds / 60;
    totalSeconds %= 60;

    int totalHours = t1.hours + t2.hours;
    totalHours += totalMinutes / 60;
    totalMinutes %= 60;

    return Time(totalHours, totalMinutes, totalSeconds);
}

int main()
{
    Point p1;
    Point p2(3.5, 4.5);
    Point p3 = p2;

    Distance d1(5, 8);
    Distance d2(6, 2);
    compare(d1, d2);

    Account acc1(101, 5000);
    Account acc2(102, 3000);
    transferFunds(acc1, acc2, 2000);

    Time t1(2, 45, 30);
    Time t2(1, 20, 45);
    Time t3 = addTime(t1, t2);
    cout << "Total Time: " << t3.hours << " hours " << t3.minutes << " minutes " << t3.seconds << " seconds" << endl;

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}