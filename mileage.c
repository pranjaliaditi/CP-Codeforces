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
    scanf("%d", &t);
    int X[t], Y[t], A[t], B[t], N[t], ans[t];
    // 0 petrol, 1 diesel, 2 any

    int i;
    for(i=0;i<t;i++)
    {
        scanf("%d", &N[i]);
        scanf("%d", &X[i]);
        scanf("%d", &Y[i]);
        scanf("%d", &A[i]);
        scanf("%d", &B[i]);

        float pet, die;

        pet = ((float)N[i]/A[i]) * X[i];
        die = ((float)N[i]/B[i]) * Y[i];

        if(pet>die)
        ans[i] = 1;

        else if(die>pet)
        ans[i] = 0;

        else
        ans[i] = 2;
    }

    for(i=0;i<t;i++)
    {
        if(ans[i] == 0)
        printf("PETROL\n");
        else if(ans[i] == 1)
        printf("DIESEL\n");
        else
        printf("ANY\n");
    }

    return 0;
}
