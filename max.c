#include <stdio.h>

int main(void)
{
    int a,b,c,max;
    printf("Pleace input three numbers:");
    scanf("%d,%d,%d",&a,&b,&c);
    max=a;
    if(max<b)
        max=b;
    else
        max=a;
    if(max<c)
        max=c;
    else
        max=a;
    printf("The Max number is: %d\n",max);
    return 0;
}
