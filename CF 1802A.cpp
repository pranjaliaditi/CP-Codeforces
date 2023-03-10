#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
int i,j,k;
for(i=0;i<t;i++){
    int n;
    cin >> n;
    vector <int> likes;
    vector <int> dislikes;
    int b[n];
    for(j=0;j<n;j++)
        {
            cin >> b[j];

            if(b[j] > 0)
                likes.push_back(b[j]);

            else
                dislikes.push_back(b[j]);
        }

    int cnt = 0;

    for(j=0;j<n;j++){
        if(b[j] > 0)
            {   cnt++;
                cout << cnt << " ";
            }
    }

    for(j=0;j<n;j++){
        if(b[j] < 0)
            {   cnt--;
                cout << cnt << " ";
            }
    }

    cout << "\n";
    cnt = 0;
    int szl = likes.size();
    int szd = dislikes.size();
    k = 0;
    int l = 0;

    for(j=0;j<n;j++){

        if(j%2 == 0 || l >= szd){
            if(k<szl){
                cnt++;
                cout << cnt << " ";
                k++;
            }
        }

        else{
            if(l<szd){
                cnt--;
                cout << cnt << " ";
                l++;
            }
        }
    }

    cout << "\n";

}
}
