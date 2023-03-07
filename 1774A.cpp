#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
int i,j,k;
string ans[t];
for(i=0;i<t;i++){
    int n;
    cin >> n;
    string a;
    cin >> a;
    char temp[n-1];
    k=0;

    int sum = 0;

    if(a[0] == '1') sum = 1;
    else sum = 0;

    for(j=1;j<n;j++){
        int num = 0;
        if(a[j] == '1') num = 1;
        else num = 0;
        if(sum == 1 && num == 1)
        {
            temp[k] = '-';
            k++;
            sum = 0;
        }
        else if(sum == 1 && num == 0)
        {
            temp[k] = '+';
            k++;
        }
        else if(sum == 0 && num == 1){
            temp[k] = '+';
            k++;
            sum = 1;
        }

        else{
            temp[k] = '+';
            k++;
        }
    }



    for(j=0;j<n-1;j++)
        cout << temp[j];
        cout << "\n";
        //cout << num;
}
return 0;
}

