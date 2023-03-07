#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int ans[t];
    int i,j,k;
    for(i=0;i<t;i++)
    {
        string s;
        int n;
        cin >> n >> s;
        int A=0, B=0,C=0,D=0,E=0,F=0,G=0,H=0,I=0,J=0,K=0,L=0,M=0,N=0,O=0,P=0,Q=0,R=0,S=0,T=0,U=0,V=0,W=0,X=0,Y=0,Z=0;

        for(j=0;j<n;j++)
        {
            if(s[j] == 'a')
                A += 1;
            else if (s[j] == 'b')
                B++;
            else if(s[j] == 'c')
                C++;
            else if(s[j] == 'd')
                D++;
                else if(s[j] == 'e')
                E++;
                else if(s[j] == 'f')
                F++;
                else if(s[j] == 'g')
                G++;
                else if(s[j] == 'h')
                H++;
                else if(s[j] == 'i')
                I++;
                else if(s[j] == 'j')
                J++;
                else if(s[j] == 'k')
                K++;
                else if(s[j] == 'l')
                L++;
                else if(s[j] == 'm')
                M++;
                else if(s[j] == 'n')
                N++;

                else if(s[j] == 'o')
                O++;
                else if(s[j] == 'p')
                P++;
                else if(s[j] == 'q')
                Q++;
                else if(s[j] == 'r')
                R++;
                else if(s[j] == 's')
                S++;
                else if(s[j] == 't')
                T++;
                else if(s[j] == 'u')
                U++;
                else if(s[j] == 'v')
                V++;
                else if(s[j] == 'w')
                W++;
                else if(s[j] == 'x')
                X++;
                else if(s[j] == 'y')
                Y++;
                else if(s[j] == 'z')
                Z++;

        }


        if((A%2 == 0) && (B%2 == 0) && (C%2 == 0) && (D%2 == 0) && (E%2 == 0) && (F%2 == 0) && (G%2 == 0) && (H%2 == 0) && (I %2 == 0) && (J%2 == 0) && (K%2 == 0) && (L%2 == 0) && (M%2 == 0) && (N%2 == 0) && (O%2 == 0) && (P%2 == 0) && (Q%2 == 0) && (R%2 == 0) && (S%2 == 0) && (T%2 == 0) && (U%2 == 0) && (V%2 == 0) && (W%2 == 0) && (X%2 == 0) && (Y%2 == 0) && (Z%2 == 0))
            ans[i] = 1;
            else
                ans[i] = 0;
    }

    for(i=0;i<t;i++)
    {
        if (ans[i] == 1)
            cout << "YES \n";
        else
            cout << "NO \n";
    }
}
