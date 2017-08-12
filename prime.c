#include <stdio.h>

int main(void)
{
    int i,j;

    //输出100以内的质数，质数只能被1和本身整除
    for(i=2;i<=100;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;         //不是质数，跳出内层for循环
        }
        if(i==j)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
