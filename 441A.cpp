#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n,v;
    cin >> n >> v;
    int i,j,k;
    vector <int> el_sellers; // eligible sellers
    for(i=0;i<n;i++){
        int n_items;
        cin >> n_items;
        int price[n_items];
        for(j=0;j<n_items;j++){
            cin >> price[j];
        }

        for(j=0;j<n_items;j++){
            if(price[j] < v)
            {
                el_sellers.push_back(i+1);
                break;
            }
        }
    }

    int sz = el_sellers.size();
    cout << sz << "\n";
    for(i=0;i<sz;i++)
        cout << el_sellers[i] << " ";
}
