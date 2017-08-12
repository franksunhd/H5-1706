#include <stdio.h>
#include <ctype.h>

int data[]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
int main(void)
{
    int ch;
    while((ch=getchar())!=EOF)
    {
        if(isalpha(ch))
        {
            ch=tolower(ch);
            printf("%d",data[ch-'a']);
        }
        else 
        {
            putchar(ch);
        }
    }
    return 0;
}
