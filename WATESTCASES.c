/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);

    int i,j,k, m[t];

    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int s[n];
        char v[1000];

        for(j=0;j<n;j++)
        scanf("%d",&s[j]);

        scanf("%s",&v);

        m[i] = 1000;

        for(j=0;j<n;j++)
        {
            if(v[j] =='0' && m[i]>=s[j])
                m[i] = s[j];

        }

    }

     for(i=0;i<t;i++)
       printf("%d \n",m[i]);


    return 0;
}
