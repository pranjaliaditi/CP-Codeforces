#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int i,j,k;
    for(i=0;i<t;i++){
        string s;
        cin >> s;
        int alice = 0;
        vector <int> cnt;
        int tcnt = 0;

        for(j=0;j<s.length();j++){

                if(s[j] == '1')
                    tcnt++;

                else{
                        if(tcnt != 0)
                    cnt.push_back(tcnt);

                    tcnt = 0;
                }
        }

        if(tcnt != 0)
        cnt.push_back(tcnt);

        int n = cnt.size();
        sort(cnt.begin(), cnt.end(), greater<int>());

        for(j=0;j<n;j++){
            if(j % 2 == 0)
                alice += cnt[j];
        }

        cout << alice << "\n";
    }
}
