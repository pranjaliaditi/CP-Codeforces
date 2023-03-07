#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int t[n];
    int i,j,k, o1=0, o2=0, e1=0, e2=0, ie1 = 0, ie2 = 0, io1 = 0, io2 =0;
    for(i=0;i<n;i++)
    {
        cin >> t[i];
        if(t[i] % 2 ==0 && e1 == 0)
            {e1 = t[i]; ie1 = i;}
        else if(t[i] % 2 ==0 && e2 == 0)
            {e2 = t[i]; ie2 = i;}
        else if(t[i] % 2 ==1 && o1 == 0)
            {o1 = t[i]; io1 = i;}
        else if(t[i] % 2 == 1 && o2 == 0)
            {o2 = t[i]; io2 = i;}
    }

    if((o1 != 0 && o2 != 0) && (e1 == 0 || e2 == 0))
        cout << ie1+1;
    else if((o1 == 0 || o2 == 0) && (e1 != 0 && e2 != 0))
        cout << io1+1;
}
