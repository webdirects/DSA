#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    cout << "Maximum: " << arr[n-1] << endl;
    cout << "Minimum: " << arr[0] << endl;
    
}