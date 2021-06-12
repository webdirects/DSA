#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr.push_back(input);
    }

    int low = 0;
    int high = n - 1;

    int val;
    cin >> val;

    while (low <= high)
    {
        int mid = low + ((high - low) / 2);

        if (arr[mid] == val)
        {
            cout << mid;
        }

        if (val < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    
}