//
//  main.c
//  打擂台算法6.2.4
//
//

#include <stdio.h>
int main()
{
    int i,j,max,x,y;
    int a[3][4]={{1,2,3,4},{8,3,4,6},{9,0,7,5}};
    max =a[0][0];
    for (i=0;i<=2;i++)
        for (j=0;j<=3;j++)
            if (max<a[i][j])
            {
            max=a[i][j];
            x=i;
            y=j;
            }
    printf("max=%d\n x=%d\n y=%d\n",max,x,y);
    return 0;
}
