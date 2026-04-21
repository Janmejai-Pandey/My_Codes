#include <bits/stdc++.h>
using namespace std;

template <typename T>
class MyVector {
private:
    T* data;
    int s;
    int cap;
    
    void resize() {
        int newCap = (cap == 0) ? 1 : cap * 2;
        T* newData = new T[newCap];
        for (int i = 0; i < s; i++) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
        cap = newCap;        
    }
    
public:
    MyVector() : data(nullptr), s(0), cap(0) {}
    
    ~MyVector() {
        delete[] data;
    }
    
    int size(){
        return s;
    }

    int capacity(){
        return cap;
    }
    
    void push_back(T val) {
        if (s == cap) {
            resize();
        }
        data[s++] = val;
    }
    
    void pop_back() {
        if (s > 0) {
            --s;
        }
        else {
            cout << "Vector is empty!" << endl;
        }
        
    }
    
    T& operator[](int index) {
        return data[index];
    }
};

int main() {
    MyVector<int> vec;
    cout << "Initial size: " << vec.size() << endl;
    cout << "Initial capacity: " << vec.capacity() << endl;
    cout << endl;
    
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;
    cout << "Elements: " << vec[0] << " " << vec[1] << " " << vec[2] << endl;
    cout << endl;
    
    vec.pop_back();
    cout << "Size after pop_back: " << vec.size() << endl;
    cout << "Capacity after pop_back: " << vec.capacity() << endl;
    cout << "Elements: " << vec[0] << " " << vec[1] << endl;
    cout << endl;
    
    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}