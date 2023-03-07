/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int pass[n];
    int i,cnt = 0;
    int one=0, two=0, three=0, four=0;
    
    for(i=0;i<n;i++)
    {
        scanf("%d", &pass[i]);
        
        if(pass[i] == 1)
        one++;
        else if(pass[i] == 2)
        two++;
        else if(pass[i] == 3)
        three++;
        else if(pass[i] == 4)
        four++;
    }

cnt = cnt + four;
four = 0;
cnt = cnt + (two/2);
two = two % 2;

if(three >= one)
{
    cnt = cnt + (three-one) + one;
    one = 0;
}

else if(three < one)
{
    cnt = cnt + three;
    one = one - three;
    three = 0;
}

if(one >= 2 && two != 0 && (one-2)%4 ==0)
{
    cnt = cnt + 1 + ((one-2)/4);
}   

else if( one >= 2 && two != 0 && ((one-2)%4) !=0)
    {
        cnt = cnt + 1 + ((one-2)/4) + 1;
}

else if(two != 0 && one<2)
{
    cnt = cnt + 1;
    one = 0;
}

else if(two == 0 && (one%4) ==0)
{
    cnt = cnt + (one/4);
}   
   else if(two == 0 && (one%4) !=0)
   { cnt = cnt + (one/4) + 1;
    }

printf("%d",cnt);
    return 0;
}
