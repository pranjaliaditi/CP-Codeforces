#include <bits/stdc++.h>
using namespace std;
# define int long long
int32_t main(){
    int t;
    cin >> t;

    while(t--){
            int i,j,k;
            int n;
            cin >> n;
            int num[n];
            int flag = 0;

            for(j=0; j<n; j++){
                cin >> num[j];
            }

            int dec = 0, inc = 0;

            for(i=n-1;i>0;i--){

                if(num[i] > num[i-1]){
                   inc = 1;
                }

                if( num[i] < num[i-1] ){
                    if(inc == 1){
                        flag = 1;
                        break;
                    }
                }
            }


            if (flag == 0)
                cout << 0 << "\n";

            else
            cout << i << "\n";
    }

}
