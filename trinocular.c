#include <stdio.h>

int main(void){
    int a,b,c;
    int max;

    printf("Please input three numbers(a,b,c):");
    scanf("%d,%d,%d",&a,&b,&c);
    max=0;

    max=(a>b)?((a>c)?a:c):((b>c)?b:c);

    printf("The Max number is:%d\n",max);
    return 0;
}
