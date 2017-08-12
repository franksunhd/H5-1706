//输出年月日

#include <stdio.h>

int main(void){
    int nn,yy,rr;
    printf("Enter a date(nn/yy/rr):");
    scanf("%d/%d/%d",&nn,&yy,&rr);
    printf("You entered the date is:%d/%02d/%d\n",nn,yy,rr);
    return 0;
}
