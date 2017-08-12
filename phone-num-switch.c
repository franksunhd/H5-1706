#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;
    while((ch=getchar())!=EOF)
    {
        if(isalpha(ch))
        {
            ch=tolower(ch);
            switch(ch)
            {
                case 'a':case 'b':case 'c':putchar('2');break;
                case 'd':case 'e':case 'f':putchar('3');break;
                case 'g':case 'h':case 'i':putchar('4');break;
                case 'j':case 'k':case 'l':putchar('5');break;
                case 'm':case 'n':case 'o':putchar('6');break;
                case 'p':case 'q':case 'r':case 's':putchar('7');break;
                case 't':case 'u':case 'v':putchar('8');break;
                case 'w':case 'x':case 'y':case 'z':putchar('9');break;

            }
        }
        else
            putchar(ch);
    }

    return 0;
}
