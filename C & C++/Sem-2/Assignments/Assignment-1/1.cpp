#include <bits/stdc++.h>
using namespace std;
struct Student{
    long rollNo;
    string name;
    int marks[3];
    int total;
    int avg;
};

int main() {
    int n;
    cout<<"Enter Value of n - ";
    cin>>n;

    struct Student stu[n];
    for(int i = 0;i<n;i++){
        cout << "Student "<<i+1<<endl;
        cout<<"Name - ";
        cin>>stu[i].name;
        cout<<"Roll No - ";
        cin>>stu[i].rollNo;
        cout<<"Marks 1 - ";
        cin>>stu[i].marks[0];
        cout<<"Marks 2 - ";
        cin>>stu[i].marks[1];
        cout<<"Marks 3 - ";
        cin>>stu[i].marks[2];

        stu[i].total = stu[i].marks[0] + stu[i].marks[1] +stu[i].marks[2];
        stu[i].avg = stu[i].total / 3;
        cout<<endl;
    }

    cout << "Enter Roll No to check - ";
    int check;
    cin >> check;

    for(int i = 0 ;i < n; i++){
        if(check == stu[i].rollNo)
        {
            cout << "Name - "<<stu[i].name<<endl;
            cout << "Roll No - "<<stu[i].rollNo<<endl;
            cout << "Marks 1  - "<<stu[i].marks[0]<<endl;
            cout << "Marks 2  - "<<stu[i].marks[1]<<endl;
            cout << "Marks 3  - "<<stu[i].marks[2]<<endl;

            cout << "Total Marks - "<<stu[i].total<<endl;
            cout << "Average Marks - "<<stu[i].avg<<endl;
            cout << "Janmejai Pandey - 2501030199 - B4" << endl;
            return 0;
        }
    }
    cout<<"Roll No doesn't exist" << endl;
    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}
