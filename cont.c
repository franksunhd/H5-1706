#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;
    int num=0,count=0;
    while((ch=getchar())!=EOF)
    {
        if(isdigit(ch))
            num++;
        if(isalpha(ch))
            count++;
    }
    printf("num~%d,count~%d\n",num,count);
    return 0;
}
