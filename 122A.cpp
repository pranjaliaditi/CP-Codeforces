#include <bits/stdc++.h>

using namespace std;

int lucky(int n)
{
    int i,j,k,flag = 1;
    for(i=n;i!=0;i = i/10)
    {
        j = i % 10;
        if(j!= 4 && j!=7)
        {
            flag = 0;
        }
    }

    if (flag == 1)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;
    int i,j,k,flag = 1;
    for(i=n;i>0;i = i/10)
    {
        j = i % 10;

        if(j!= 4 && j!=7)
        {
            flag = 0;
            break;
        }
    }

    k = flag;
    flag = 0;

    if(k == 1)
        cout << "YES";

    else{
    for(i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            flag = lucky(i);
            if(flag == 1)
            {
                cout << "YES";
                break;
            }
        }
    }

    if(flag == 0)
        cout << "NO";
    }

}
