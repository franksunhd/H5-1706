#include <stdio.h>

int main(void)
{
    int i,j;
    int flag = 0;               //是质数，状态为0

    //输出100以内的质数，质数只能被1和本身整除
    for(i=2;i<=100;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                flag=1;         //不是质数，转换状态1
        }
        if(flag==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
