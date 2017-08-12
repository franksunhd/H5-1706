//1~10的阶乘和
#include <stdio.h>

int main(void)
{
    int i;

    int  mul=1;
    int sum=0;

    for(i=1;i<=10;i++)
    {
        mul=mul*i;
        sum=sum+mul;
    }
    printf("%d\n",sum);
    return 0;
}
