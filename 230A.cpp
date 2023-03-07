#include <bits/stdc++.h>
using namespace std;

void pairsort(int x[], int y[], int n)
{
    pair<int, int> pairt[n];

    // Storing the respective array
    // elements in pairs.
    for (int i = 0; i < n; i++)
    {
        pairt[i].first = x[i];
        pairt[i].second = y[i];
    }

    // Sorting the pair array.
    sort(pairt, pairt + n);

    // Modifying original arrays
    for (int i = 0; i < n; i++)
    {
        x[i] = pairt[i].first;
        y[i] = pairt[i].second;
    }
}

int main()
{
    int s,n;
    cin >> s >> n;
    int i,j,k,x[n],y[n],flag = 0, sx = 0, sy = 0;

    for(i=0;i<n;i++)
       {
           cin >> x[i] >> y[i];
       }

    pairsort(x, y, n);

    flag = 1;

    for(i=0;i<n;i++)
    {
        if(s <= x[i])
        {
            flag = 0;
            break;
        }

        else
        {
            s += y[i];
        }
    }

    if(flag == 1)
        cout << "YES";
    else
        cout << "NO";

return 0;
}
