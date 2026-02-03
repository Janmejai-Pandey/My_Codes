#include <bits/stdc++.h>
using namespace std;

class SensorLog
{
private:
    int noOfReadings;
    int *readings;
public:
    SensorLog(int n);
    ~SensorLog();

    void accept(){
        cout << "Enter " << noOfReadings << " readings -" << endl;
        for(int i = 0; i < noOfReadings; i++)
        {
            cin>>readings[i];
        }
    }

    void show(){
       cout << "Readings are -" << endl;
        for(int i = 0; i < noOfReadings; i++)
        {
            cout << readings[i] << endl;
        }  
    }

    void calc(){ 
        int max = readings[0];
        int min = readings[0];
        double avg = readings[0];
        for(int i = 1; i < noOfReadings; i++) {
            if(readings[i] > max) {
                max = readings[i];
            }
            if(readings[i] < min) {
                min = readings[i];
            }
            avg+=readings[i];
        }
        avg /= noOfReadings;

        cout << "Maximum Temperature - " << max << endl;
        cout << "Minimum Temperature - " << min << endl;
        cout << "Average Temperature - " << avg << endl;
    }
};

SensorLog::SensorLog(int n)
{
    noOfReadings = n;
    readings = new int[noOfReadings];
}

SensorLog::~SensorLog()
{
    delete[] readings;
}

int main(){
    cout << "Enter number of readings - ";
    int n;
    cin >> n;
    SensorLog ob(n);

    ob.accept();
    ob.show();
    ob.calc();
}
