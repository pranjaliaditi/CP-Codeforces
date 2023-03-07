#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int i;
    int up = 0, low = 0;
    for(i=0;i<s.length();i++){
     if(s[i] >= 97)
            low++;
     else
        up++;
    }

    int n = ceil((s.length()/2));

    if(low >= up ){
        for(i=0;i<s.length();i++){
            if(s[i] < 97){
                s[i] += 32;
            }
        }
    }

    else{
            for(i=0;i<s.length();i++){
            if(s[i] >= 97){
                s[i] -= 32;
            }
        }
    }

    cout << s;
}
