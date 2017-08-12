#include <stdio.h>

int main(void)
{
    int i,n=0;
    int flag=0;
    int a[100000];
    for(i=10000;i<100000;i++)
    {
        flag=0;
        if(i/10000==i%10 && i/1000%10==i/10%10)
        {
            printf("%-7d",i);
            n++;
            flag=1;
        }
        if(flag==1)
        {
            if(n%10==0)
            {
                printf("\n");
            }
            flag=0;
        }
    }
    return 0;
}
