#include <bits/stdc++.h>
using namespace std;
int main()
{   int t;
cin >> t;
int ans[t];
int i,j,k,x;
for(i=0;i<t;i++)
{
    cin >> x;
    if(x>50)
    {
        ans[i] = 0;
    }

    else
        ans[i] = 1;
}

for(i=0;i<t;i++)
{
    if(ans[i] == 0)
        cout << "RIGHT \n";
    else
        cout << "LEFT \n";
}
}
