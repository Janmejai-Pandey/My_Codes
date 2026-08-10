#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "First pair of repeating elements: (" << arr[i] << ", " << arr[j] << ")" << endl;
                cout << "Position (index) of first occurrence: " << i + 1 << endl;
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
    {
        cout << "No repeating elements found in the array." << endl;
    }

    delete[] arr;

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}