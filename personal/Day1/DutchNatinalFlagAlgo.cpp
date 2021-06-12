#include "bits/stdc++.h"
using namespace std;

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

    // algo 
    int lo = 0;
    int hi = arr.size() - 1;
    int mid = 0;

    while(mid <= hi){
        switch(arr[mid])
        {
            // if the element is 0
            case 0:
                swap(arr[lo], arr[mid]);
                lo++;
                mid++;
                break;
            
            // if the element is 1
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[hi--]);
                break;            
        }
    }
    
    for(int i=0; i<n; i++)
    {
        cout << arr[i];
    }
}