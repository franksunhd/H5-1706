#include <stdio.h>
#include <math.h>

int main(void)
{
    int bai,shi,ge;
    int i,sum=0;

    for(i=100;i<=999;i++)
    {
        bai=i/100;
        shi=(i/10)%10;
        ge=i%10;
        
        sum=pow(bai,3)+pow(shi,3)+pow(ge,3);
        if(sum==i)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
