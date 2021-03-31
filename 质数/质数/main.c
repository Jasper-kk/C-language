//
//  main.c
//  质数
//
//

#include <stdio.h>
int main()
{
    int n,i;
    printf("input a number: ");
    scanf("%d",&n);
    for(i=2;i<=(n-1);i++)
        if(n%i==0)break;
    if(n>i) printf("%d is not zhishu\n",n);
    else printf("%d is zhishu\n",n);
    return 0;
}
