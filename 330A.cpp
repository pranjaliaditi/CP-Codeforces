#include <bits/stdc++.h>
using namespace std;
int main(){
int r,c;
cin >> r >> c;
char s[r][c];
int i,j,k;
for(i=0;i<r;i++){
    for(j=0;j<c;j++)
        cin >> s[i][j];
}

int cnt = 0;

for(i=0;i<r;i++){
    int flag = 1;

    for(j=0;j<c;j++){
        if(s[i][j] == 'S')
            flag = 0;
    }

    if(flag == 1){
        for(j=0;j<c;j++){
            if(s[i][j] == '.'){
                cnt++;
                s[i][j] = '0';
            }
        }
    }
}

for(j=0;j<c;j++){
    int flag = 1;
    for(i=0;i<r;i++){
        if(s[i][j] == 'S')
            flag = 0;
    }

    if(flag == 1){
        for(i=0;i<r;i++){
            if(s[i][j] == '.'){
                cnt++;
                s[i][j] = '0';
            }
        }
    }
}

cout << cnt;

}
