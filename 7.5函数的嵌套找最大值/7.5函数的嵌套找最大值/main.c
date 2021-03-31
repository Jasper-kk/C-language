//
//  main.c
//  7.5函数的嵌套找最大值
//
//

#include <stdio.h>
int main()
{
    int max(int x,int y);
    int a,b,c,d,max2,max3,maxn;
    printf ("please shuru four int:");
    scanf ("%d%d%d%d",&a,&b,&c,&d);
    max2 = max(a,b);
    max3 = max(c,d);
    maxn = max(max2,max3);
    printf("%d is max\n",maxn);
    return 0;
}
int max(int x,int y)
{
    return (x>y?x:y);
}
