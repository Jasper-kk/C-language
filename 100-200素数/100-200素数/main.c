//
//  main.c
//  100-200素数
//
//

#include <stdio.h>
int is_shushu(int n)
{
    int i;
    for(i=2;i<=(n-1);i++)
    if(n%i==0&i<=n) return 0;
    return (i);
}

int main()
{
    int n;
    for(n=101;n<=200;n=n+2)
        if(is_shushu(n)) printf("%d\t",n);
    return 0;
}
