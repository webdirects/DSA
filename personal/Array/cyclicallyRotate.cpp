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

    int last_elem = arr.back();
    // cout << last_elem << endl;

    arr.pop_back();

    arr.insert(arr.begin(), last_elem);

    for(auto it:arr)
    {
        cout << it << " ";
    }

}