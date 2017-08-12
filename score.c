#include <stdio.h>

int main(void){

    float score;

    printf("Please input a score:");
    scanf("%f",&score);
    if(score>=90)
    {
        printf("A\n");
    }else
    if(score>=80&&score<90)
    {
        printf("B\n");
    }else
    if(score>=70&&score<80)
    {
        printf("C\n");
    }else
    if(score>=60&&score<70)
    {
        printf("D\n");
    }else
    if(score<60)
    {
        printf("E\n");
    }

    printf("You score is: %5.1f\n",score);
    return 0;
}
