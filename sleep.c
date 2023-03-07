/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    int n, H, M, resh[t], resm[t];
    int i,j;
    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        scanf("%d", &H);
        scanf("%d", &M);

        int T = H * 60 + M;

        int alh[n], alm[n];

        for(j=0;j<n;j++)
        {
            scanf("%d", &alh[j]);
            scanf("%d", &alm[j]);
        }

        int tim_min[n], min = ((alh[0] * 60 + alm[0]) - T) ;
        int min_ind;

        for(j=0;j<n;j++)
        {
            tim_min[j] = ((alh[j]*60 + alm[j]) - T);

            if(min<0)
            min = min + (24*60);

            if(tim_min[j] < 0)
            tim_min[j] = tim_min[j] + (24*60);

            if(H == alh[j] && alm[j] >= M && (alm[j] - M) <= min )
            {
                min = alm[j] - M;
            }

            else if((tim_min[j]) <= (min))
            {
                min = tim_min[j];
                min_ind = j;
            }

        }



        resh[i] = min/60;
        resm[i] = min%60;
    }

    for(i=0;i<t;i++)
        {
            printf("%d %d\n", resh[i], resm[i]);
        }

    return 0;
}
