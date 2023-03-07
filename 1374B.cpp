#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin >> t;
    int i,j,k;
    for(i=0;i<t;i++){
        int n;
        cin >> n;
        int cnt = 0;
        while(n>0){
            if(n<6){
                if(n == 1){
                    cnt+=0;
                    break;
                }

                else if(n == 3){
                    cnt += 2;
                    break;
                }

                else{
                    cnt = -1;
                    break;
                }
            }

            if(n >= 6){
                if(n%3 != 0){
                    cnt =  -1;
                    break;
                }

                else{
                    if(n%2 == 1){
                        n *= 2;
                        cnt += 1;
                    }
                }

                if(n%6 == 0){
                    n = n/6;
                    cnt++;
                }
            }
        }
cout << cnt << "\n";
    }

}

