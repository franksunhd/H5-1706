#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int ch;
    while((ch=getchar())!=EOF)
    {
        if(isalpha(ch))
        {
            ch=toupper(ch);
            putchar(ch);
        }
        else
        {
            putchar(ch);        
        }
    }
    putchar('\n');
    return 0;
}
