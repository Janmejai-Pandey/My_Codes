#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, n;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        vector<int> nums(n);

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end());

        int st, end = n-1, mid;
        for(int i = 0 ; i < n; i ++){
            st = i + 1
            int check = nums[i] * x;
            while (st <= end)
            {
                mid = st + (end - st) / 2;
                if(check == nums[mid]) {
                    nums.erase(nums.begin()+mid);
                    nums.erase(nums.begin()+i);
                    i--;
                    n-=2;
                    break;
                }
                else if (check > nums[mid]) {
                    st = mid +1;
                }
                else {
                    end = mid - 1;
                }
            }
        }
        cout << nums.size() << endl;
    }
    return 0;
}