#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n],mx, mn,im=0,in=0, cnt = 0;
    int flag = 0;
    int i,j,k;

    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }


    mx = mn = a[0];

    for(i=0;i<n;i++)
    {
        if(a[i] > mx)
        {
            mx = a[i];
            im = i;
        }

        if(a[i] <= mn)
        {
            mn = a[i];
            in = i;

        }

    }

    if(im > in)
        cnt = im-0 + n- in - 1 - 1;

    else
        cnt = im-0 + n-1 - in;

    cout << cnt;

}
