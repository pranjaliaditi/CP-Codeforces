/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, k;
    
    scanf("%d", &n);
    scanf("%d", &k);
    
    int a[n], i, cnt = 0;
    
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    
    for(k--,i=0;i<n;i++)
    {
        if(a[i] != 0 && a[i] >= a[k])
        cnt++;
    }
    
    printf("%d\n",cnt);

    return 0;
}
