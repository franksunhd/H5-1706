//将文本中的%20用空格代替

#include <stdio.h>

int main(void)
{
    int ch;
    int s=0;

    while((ch=getchar())!=EOF)
    {
        switch(s)
        {
            case 0:
                if(ch=='%')
                {
                    s=1;
                }
                else
                {
                    s=0;
                    putchar(ch);
                }
                break;
            case 1:
                if(ch=='2')
                {
                    s=2;
                }else if(ch=='%')
                {
                    s=1;
                    putchar(ch);
                }else
                {
                    s=0;
                    putchar(ch);
                }
                break;
            case 2:
                if(ch=='0')
                {
                    s=0;
                    putchar(' ');
                }else
                {
                    s=1;
                    putchar('%');
                    putchar('2');
                    putchar(ch);
                }
                break;
        }
    }
    return 0;
}
