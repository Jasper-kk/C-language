//
//  main.c
//  7.6递归方法求n!
//
//

#include <stdio.h>
int main()
{
    int F,i;
    int fac(int n);
    printf ("intput number:\n");
    scanf ("%d",&i);
    F=fac(i);
    printf ("%d is jiechen\n",F);
    return 0;
}
int fac(int n)
{
    int f;
    if (n<0) //考虑完整的话需要看n<0的情况
        printf ("error");
    else if (n==0||n==1)
        f=1;
    else
        f=fac(n-1)*n;
    return f;
}
