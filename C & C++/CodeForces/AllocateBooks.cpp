#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &books, int n, int m, int allowed)
{
    int students = 1, pages = 0;
    for (int i = 0; i < n; i++)
    {
        // if (books[i] > allowed)
        // {
        //     return false;
        // }
        if (pages + books[i] <= allowed)
        {
            pages += books[i];
        }
        else
        {
            pages = books[i];
            students++;
        }
    }
    return students <= m;
}

int main()
{
    int n;
    cin >> n;

    vector<int> books(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> books[i];
    }

    int m;
    cin >> m;
    int ans = -1;
    int sum = 0;

    for (int i = 0; i < n; ++i)
    {
        sum += books[i];
    }

    int start = 1, end = sum, mid;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (isValid(books, n, m, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << ans;
    return 0;
}
