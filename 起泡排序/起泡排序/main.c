//
//  main.c
//  起泡排序
//
//

#include <stdio.h>
int main()
{
    int a[10];
    int i,j,t;
    printf ("input ten number:\n");
    for (i=0;i<=9;i++)
        scanf ("%d",&a[i]);
    
    for (j=0;j<9;j++)
        for (i=0;i<9-j;i++)
            if (a[i]>=a[i+1])
                {t=a[i];a[i]=a[i+1];a[i+1]=t;}
    
    printf ("the small shunxu is:\n");
    for (i=0;i<=9;i++) printf ("%d ",a[i]);
    return 0;
}
