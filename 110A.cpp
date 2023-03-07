#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
int n;
cin >> n;
int cnt = 0;
int i;
while(n!=0){

int dig = n%10;
    if(dig == 4 || dig == 7)
        cnt++;

    n = n/10;
}
int flag = 0;
if(cnt == 0)
    cout << "NO";

    else{
        while(cnt!=0){
    if(cnt%10 != 4 && cnt%10 != 7)
    {
        cout << "NO";
        flag = 1;
        break;
    }

    else
        flag = 0;

    cnt = cnt/10;
}

if(cnt == 0)
    cout << "YES";
    }





}
