//本程序演示了 用字符类型指针 指向字符串的某个位置，并且进行移动的过程
//例如提取标签<h1>xxxxxxxxxxx</h1>中的内容
//    <h1>zzzzzzzzzzz_/h1>
//    ^   ^          ^
//    p1             p2    

#include <stdio.h>
#include <string.h>

int main(void)
{
    char data[100];
    char *head;                 //字符类型指针
    char *tail;                 //字符类型指针
    char result[100];
    char result2[100];
    char buf[200];
    fgets(data,100,stdin);

    head=strstr(data,"<h1>");
    head=head+strlen("<h1>");
    tail=strstr(head,"</h1>");
    tail[0]='\0';

    strcpy(result,head);
    head =tail + strlen("</h1>");
    head=strstr(head,"<h1>");
    head=head+strlen("<h1>");
    tail=strstr(head,"</h1>");
    tail[0]='\0';
    strcpy(result2,head);
    sprintf(buf,"result1~ %s\nresult2~ %s",result,result2);
    puts(buf);
    return 0;
}
