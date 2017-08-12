#include <stdio.h>
#include <ctype.h>

char data[]="22233344455566677778889999";
int main(void)
{
    int ch;
    while((ch=getchar())!=EOF)
    {
        if(isalpha(ch))
        {
            ch=tolower(ch);
            printf("%c",data[ch-'a']);
        }
        else 
        {
            putchar(ch);
        }
    }
    return 0;
}
