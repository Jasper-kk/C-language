//
//  main.c
//  7.14 一个一维数组放10score，求average Max Min
//
//

#include <stdio.h>
float Max=0,Min=0;
int main()
{
    float aver(float array[ ],int n);
    float average,score[10];
    int i;
    printf ("input ten score:");
    for (i=0;i<10;i++)
        scanf ("%f",&score[i]);
    average=aver(score,10);
    printf ("%f is max,%f is min,%f is average",Max,Min,average);
    return 0;
}

float aver(float array[ ],int n)
{
    int i;
    float average,sum=array[0];
    Max=Min=array[0];
    for(i=0;i<n;i++)
    {
        if (Max<array[i])
            Max=array[i];
        else if (Min>array[i])
            Min=array[i];
        sum=sum+array[i];
    }
    average=sum/n;
    return average;
}
