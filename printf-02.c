//输出不同类型的整型和浮点型数据

#include <stdio.h>

int main(void)
{
    int i,j;
    float x,y;

    i=10;
    j=20;
    x=43.2892;
    y=5527.0;

    printf("i=%4d,j=%d,x=%-2.3f,y=%.2f\n",i,j,x,y);
    return 0;
}
