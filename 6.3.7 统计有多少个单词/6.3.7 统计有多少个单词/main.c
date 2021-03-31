//
//  main.c
//  6.3.7 统计有多少个单词
//
//

#include <stdio.h>
int main()
{
    char str[81];
    int i,num=0,word=0;
    char c;
    gets(str);
    for (i=0;(c=str[i])!='\0';i++)
        if (c==' ') word=0;
        else if (word==0)
                {
                    word=1;
                    num++;
                }
    printf ("the word line is %d.",num);
    return 0;
}
