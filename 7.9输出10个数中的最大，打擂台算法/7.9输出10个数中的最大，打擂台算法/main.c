//
//  main.c
//  7.9输出10个数中的最大，打擂台算法
//
//

#include <stdio.h>
int main()
{
    int max(int x,int y);
    int m,n,i,a[10];
    printf ("input ten number:\n");
    for (i=0;i<10;i++)
        scanf ("%d",&a[i]);
    printf ("\n");
    for (i=1,m=a[0],n=0;i<10;i++)
        {
            if(max(m,a[i])>m)
            {
                m=max(m,a[i]);
                n=i;
                
            }
        }
    printf ("%d is the max\n",m);
    printf ("this is di %d shu\n",n+1);
}
int max(int x,int y)
{
    return (x>y?x:y);
}

