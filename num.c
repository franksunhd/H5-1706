//把一个四位数按位分别输出

#include <stdio.h>

int main(void)
    {
        int num;
        int a,b,c,d;

        printf("Please input a number:");
        scanf("%d",&num);

        printf("a=%d\n",num/1000%10);
        printf("b=%d\n",num/100%10);
        printf("c=%d\n",num/10%10);
        printf("d=%d\n",num%10);
        return 0;
    }
