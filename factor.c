//因式分解，是质数不能分解
#include <stdio.h>

int main(void)
{
    int i,j;
    int temp;
    //判断质数50-100
    for(i=50;i<=100;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)      //不是质数，跳出本层for循环
                break;
        }
        //是质数
        if(i==j)
        {
            printf("%-3d=%2d%2c%3d\n",i,1,'*',i);
            continue;
        }
        //不是质数，可因式分解
        temp=i;
        printf("%-3d=",temp);
        for(j=2;j<i;j++)
        {
            while(temp%j==0)
            {
                printf("%2d",j);
                temp/=j;
                if(temp!=1)
                {
                    printf(" * ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
