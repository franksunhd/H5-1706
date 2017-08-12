//本程序演示了 用字符串指针 指向字符串某个位置，并且进行移动的过程
#include <stdio.h>
#include <string.h>

int main(void)
{
    char data1[20]="hello";
    char data2[20]=" world!";
    char result[100];
    
    //输出单个字符'l'
    printf("data1[2]=");
    putchar(data1[2]);
    putchar('\n');
    
    //输出单个字符串“hello”
    data1[5]='x';
    data1[6]='k';
    printf("data1(~xk)=");
    puts(data1);
    printf("data2[3]=");
    puts(data2+3);
    
    //将data1中的字符串拷贝到result数组中
    strcpy(result,data1);
    printf("result=");
    puts(result);
    
    //将data2数组的内容与result数组的内容进行连接
    strcat(result,data2);
    printf("result=");
    puts(result);
    
    //result ~"hello world"
    char *p =strchr(result,'r');                 //字符串中搜索单个字符
    printf("r~=");
    puts(p);
    p=strstr(result,"lo");                       //字符串中搜索多个字符
    printf("lo~=");
    puts(p);

    int lenth;
    lenth = strlen(result);
    printf("lenth=%d\n",lenth);                  //输出此时result数组的strlen和sizeof
    printf("sizeof(data1)=%ld\n",sizeof(data1));

    char *q;               //字符类型指针
    q=data1;               //让p指向data的起始地址
    printf("q[0]=");
    putchar(q[0]);         // h 
    putchar('\n');
    q=q+1;
    printf("q[0]=");
    putchar(q[0]);         // e
    putchar('\n');
    printf("q(e~)=");
    puts(q);               // ellokx
    
    q=data2+3;             //q指向data2的4号元素o
    printf("data2[3]=");
    puts(q);
    return 0;
}
