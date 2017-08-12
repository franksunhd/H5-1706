//输出单月日历
#include <stdio.h>

int main(void)
{
    int number,i,startday;
    printf("Enter number of days in month:");
    scanf("%d",&number);
    printf("Enter starting day of the week(1=Sun,7=Sat):");
    scanf("%d",&startday);
    printf("日 一 二 三 四 五 六");
    for(;startday>0;startday--)
        printf("  ");
    for(i=1;i<=number;i++)
    {
        if((i+startday+2)%7==0)

            printf("%.2d\n",i);
        else 
            printf("%.2d ",i);
    }
    if(i==number+1)
        printf("\n");
    return 0;
}
