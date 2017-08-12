//输入函数scanf和输出函数printf的应用

#include <stdio.h>

int main(void){
    int i,j;
    float x,y;

    scanf("%d%d%f%f",&i,&j,&x,&y);
    printf("i=%d\nj=%d\nx=%5.3f\ny=%5.3f\n",i,j,x,y);
    return 0;
}
