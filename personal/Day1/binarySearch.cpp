#include "bits/stdc++.h"
using namespace std;

void binary_search_helper(vector<int> arr, int val, int low, int high)
{
    if(low > high)
    {
        cout << "No Match" << endl;
    }
    
    int mid = low + ((high - low) / 2);

    if(arr[mid] == val)
    {
        cout << mid;
    }
    else if(val < arr[mid])
    {
        binary_search_helper(arr, val, low, mid-1);
    }
    else
    {
        binary_search_helper(arr, val, mid+1, high);
    }

}

int main()
{
    int n;
    cin >> n;

    vector<int> arr;

    for(int i=0; i<n; i++)
    {
        int input;
        cin >> input;
        arr.push_back(input);
    }

    int val;
    cin >> val;

    

    binary_search_helper(arr, val, 0, n-1);
}