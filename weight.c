// 空间与重量的转换
#include <stdio.h>

int main(void){
    int height,length,width,volume,weight;
    printf("Enter height of box:");
    scanf("%d",&height);
    printf("Enter length of  box:");
    scanf("%d",&length);
    printf("Enter weight of box:");
    scanf("%d",&width);
    volume=height * length * width;
    weight=(volume +165) /166;
  
    printf("Volume (cubic inches): %d\n",volume);
    printf("Dimensional weight(pounds): %d\n",(volume +165)/166);

    return 0;
}
