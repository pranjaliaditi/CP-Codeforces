#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int i,j,k, ans[t];
    for(i=0;i<t;i++){
            int n,x,y;
            cin >> n >> x >> y;
            int rt[n],sum=0;
            for(j=0;j<n;j++) {
                    cin >> rt[j];
                    if(rt[j]<=x)
                        sum++;
                    else
                        sum--;
            }

            int matches = y/sum;
            int left = y%sum;


    }
}
