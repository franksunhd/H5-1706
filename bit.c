#include <stdio.h>

int main(void){
    int num,count=1;

    printf("Please input a number:");
    scanf("%d",&num);
    while(num/10!=0)
    {
        count++;
        num/=10;
    }

    printf("You input the number of %d wei\n",count);
    return 0;
}
