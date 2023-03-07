#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n] , b[n];
    int i,j,k;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        b[a[i] - 1] = i+1;
    }

    for(i=0;i<n;i++)
    {

        cout << b[i] << " ";
    }
}
