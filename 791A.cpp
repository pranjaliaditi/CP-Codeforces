#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,b,years;
    int i,j,k;
    cin >> l >> b;

    if(l > b)
        years = 0;

    else{
    for(years = 1;;years++)
    {
        l = l * 3;
        b = b * 2;
        if(l > b)
        {
            break;
        }
    }
    }

    cout << years;
}
