#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int i,j,k;
    for(i=0;i<t;i++){
        int n,m;
        string s,q;
        cin >> n >> m >> s >> q;
        int sz = s.length();
        int qz = q.length();
        int same = 0;
        for(j=0;j<sz-1;j++){
            if(s[j] == s[j+1])
                same++;
        }
        for(j=0;j<qz-1;j++){
            if(q[j] == q[j+1])
                same++;
        }
        if(s[sz-1] == q[qz-1])
            same++;

        if(same > 1)
            cout << "NO\n";
        else
            cout << "YES\n";

    }
}
