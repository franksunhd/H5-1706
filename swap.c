//函数调用
#include <stdio.h>
#include <string.h>

void swap(int *p,int *q)
{
    int k;
    k=*q;
    *q=*p;
    *p=k;
}
int main(void)
{
    int i = 10, j = 20; 
    printf("i=%d,j=%d\n",i,j);
    
    swap(&i,&j);
    printf("i=%d,j=%d\n",i,j);
    return 0;
}



