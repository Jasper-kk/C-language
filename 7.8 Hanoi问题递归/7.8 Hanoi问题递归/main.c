//
//  main.c
//  7.8 Hanoi问题递归
//
//

#include <stdio.h>
int main()
{
    void zhu(int n,char one,char two,char three);
    int m;
    printf ("input the number of disk:\n");
    scanf ("%d",&m);
    printf ("the step move from %d\n",m);
    zhu(m,'A','B','C');
}

void zhu(int n,char one,char two,char three)
{
    void movee(char x,char y);
    if (n==1)
        movee(one,three);
    else
    {
        zhu(n-1,one,three,two);
        movee(one,three);
        zhu(n-1,two,one,three);
    }
}


void movee(char x,char y)
{
    printf ("%d->%d\n",x,y);
}
