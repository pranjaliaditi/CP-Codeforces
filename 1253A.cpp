#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int i,j,k;
    for(i=0;i<t;i++){
        int n;
        cin >> n;
        int a[n], b[n];

        for(j=0;j<n;j++)
            cin >> a[j];

        for(j=0;j<n;j++)
            cin >> b[j];

        int l,r, flag = 0;

        for(j=0;j<n;j++){
            if(a[j]!= b[j])
            {
                l = j;
                break;
            }
        }

        r = l;

        for(j=l+1;j<n;j++){
            if(a[j] == b[j]){
                r = j-1;
                break;
            }
        }

         if(j == n)
                r = n-1;

        for(j=0;j<l && j<n;j++){
            if(a[j] != b[j]){
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            for(j = r+1;j<n;j++){
                if(a[j] != b[j]){
                flag = 1;
                break;
                }
            }
        }

        int diff;
        if(l>=0 && l<n)
  diff = b[l] - a[l];

 else
    diff = 0;

        if(flag == 0){

            for(j=l;j<=r && j<n;j++){

                if((b[j] - a[j]) != diff){
                    flag = 1;
                    break;
                }
            }
        }


        if(flag == 0 && diff >= 0)
            cout << "yes\n";
        else
            cout << "no\n";


    }
}
