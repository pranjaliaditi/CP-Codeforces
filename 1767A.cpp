#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int ans[t];
    int i,j,k;
    for(i=0;i<t;i++){
            ans[i] = 1;
        int x1,x2,x3,y1,y2,y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

      if((x1 == x3 && y1 == y2) || (x1 == x2 && y1 == y3) || (x2 == x3 && y1 == y2) || (x1 == x2 && y2 == y3) || (x3 == x1 && y3 == y2) || (x3 == x2 && y3 == y1))
        ans[i] = 0;
    }

    for(i=0;i<t;i++){
        if(ans[i] == 1)
            cout << "Yes \n";
        else
            cout << "No \n";
    }
}
