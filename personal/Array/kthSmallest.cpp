#include "bits/stdc++.h"
using namespace std;

void getunion(int a[], int n, int b[], int m)
{
    set<int> s;
    
    for(int i=0; i<n; i++)
    {
        s.insert(a[i]);
    }
    for(int j=0; j<m; j++)
    {
        s.insert(b[j]);
    }

    cout << "Union is: " << endl;
    for(auto itr=s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }
}

int main()
{
    int n,m;
    cin >> n >> m;

    int a[n], b[m];
    
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<m; i++)
    {
        cin >> b[i];
    }

    getunion(a, n, b, m);
}