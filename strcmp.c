#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[64]="hello ";
    char str2[32]="world";
    printf("strcmp(ch)=%d\n",strcmp(str1,str2));
    return 0;
}
