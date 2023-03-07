#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,ans;
    int mat[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        cin >> mat[i][j];
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(mat[i][j] == 1)
            {
                if (i==2 && j == 2)
                    ans = 0;
                else if((i==1 && j ==2) || (i==2 && (j == 1 || j == 3)) || (i==3 && j==2) )
                    ans = 1;
                else if((i==0 && j==2) || (i==1 && (j==1 || j==3)) || (i==2 && (j == 0 || j == 4)) || (i==3 && (j==1 || j==3)) || (i==4 && j == 2) )
                    ans = 2;
                else if((i==0 && (j==1 || j==3 )) || (i==1 && (j==0 || j==4)) || (i==3 && (j==0 || j==4)) || (i==4 && (j == 1 || j == 3) ))
                    ans = 3;
                else
                    ans = 4;
            }
        }
    }

    cout<< ans;
}
