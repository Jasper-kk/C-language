//
//  main.c
//  New
//
//
#include<stdio.h>
int main()   //主函数
{
    int a,b,c,d;
    int max(int x,int y,int z);
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    d = max(a,b,c);
    printf("max = %d\n", d);
    return 0;
}
int max(int x,int y,int z) 
{
    int max;
    max = x;
    if (max<y) max = y;
    if (max<z) max = z;
    return max;
}
