#include <stdio.h>

int main(void)
{
    float i,num;
    printf("Enter a shouru for you: ");
    scanf("%f",&num);
    if(num<=750)
    {
        printf("you should jiao shuijing:$ %.2f\n",num*0.01);
    }else
    if(num >750 && num <2250)
    {
        printf("you should jiao shuijing:$ %.2f\n",7.50+(num-750)*0.02);
    }else
    if(num >=2250 && num <3750)
    {
        printf("you should jiao shuijing:$ %.2f\n",37.50+(num-2250)*0.03);
    }else
    if( num>=3750 && num <5250)
    {
        printf("you should jiao shuijing:$ %.2f\n",82.50+(num-3750)*0.04);
    }else
    if(num >=5250 && num <7000)
    {
        printf("you should jiao shuijing:$ %.2f\n",142.50+(num-5250)*0.05);   
    }
    else
    {
        printf("you should jiao shuijing:$ %.2f\n",230.00+(num-7000)*0.06);
    }
    return 0;
}

