#include <stdio.h>
#define N 1000

int main(void)
{
    int i,j;
    int sum;
    //输入1-1000
    for(i=1;i<N;i++)
    {
        sum=0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
                sum=sum+j;
        }
        //printf("sum=%d\n",sum);
        if(sum==i)
        {
            printf("%4d的因子是：",i);
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    printf("%-5d",j);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
