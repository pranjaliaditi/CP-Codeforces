#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    int i,j;
    for(i=0;i<t;i++){
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(j=0;j<n;j++){
           cin >> arr[j];
        }

        int mx = arr[0];

        for(j=0;j<n;j++){
            if(arr[j] > mx)
                mx = arr[j];
        }

        int odd[n], even[n];

        // odd
        for(j=0;j<n;j++){
            odd[j] = mx - arr[j];
        }

        int omx = odd[0];

         for(j=1;j<n;j++){
            if(odd[j] > omx)
                omx = odd[j];
        }

        // even
        for(j=0;j<n;j++){
            even[j] = omx - odd[j];
        }

        if(k%2 == 0){
            for(j=0;j<n;j++)
                cout << even[j] << " ";
        }

        else{
            for(j=0;j<n;j++)
                cout << odd[j] << " ";
        }

        cout << "\n";
    }

    return 0;
}
