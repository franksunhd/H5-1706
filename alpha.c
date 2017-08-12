//输出字母
#include <stdio.h>

int main(void)
{
    int ch;
    while((ch=getchar())!=EOF)
    {
        if(isalpha(ch))
        {
            ch=toupper(ch);
            if(ch>='A' && ch<='Z')
            {
                putchar(ch)
    }
    return 0;
}
