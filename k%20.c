//将文本中的空格用%20代替空格

#include <stdio.h>
#include <string.h>

void blake(char *str)
{
    char *p=str;
    int oldlen=strlen(str);
    int newlen=0;
    int count=0;

    while(*p)
    {
        if(*p==' ')
            count++;
        *p++;
    }
    newlen=oldlen+2*count;
    while(oldlen<newlen)
    {
        if(str[oldlen]==' ')
        {
            str[newlen--]='0';
            str[newlen--]='2';
            str[newlen--]='%';
            oldlen--;
        }
        else
            str[newlen--]=str[oldlen--];
    }
}

int main(void)
{
    char str[20]="we are happy!";
    blake(str);
    printf("%s\n",str);
    return 0;
}
