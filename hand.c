//指针地址
#include <stdio.h>

int main(void)
{
    int p='H';
    char  *p1 = "Hello";
    p1+=1;
    short *p2 = (short *)p1;
    int   *p3 = (int*)p1;
    
    
    printf("*p1~ %p\n",p1);
    printf("H~ %d\n",p);            //  'H'字符的十进制ascii码为72
    printf("*p1~ %x\n",*p1);        //  'H'字符的十六进制ascii码为48
    printf("*p2~ %d\n",*p2);        //  short类型(2)十六进制'6548'的十进制数为25928
    printf("*p3~ %d\n",*p3);        //  int 类型(4)十六进制'6c6c6548'的十进制数为1819043144
    return 0;
}
