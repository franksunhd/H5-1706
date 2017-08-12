//本程序演示了 用字符类型指针 指向字符串的某个位置，并且进行移动的过程
//例如提取标签<h1>xxxxxxxxxxx</h1>中的内容
//    <h1>zzzzzzzzzzz_/h1>
//    ^   ^          ^
//    p1             p2    

#include <stdio.h>
#include <string.h>

int main(void)
{
    char data[100]="xxxxx<h1>iiiiddkk</h1>xxxxxx";
    char *head;                 //字符类型指针
    char *tail;                 //字符类型指针
    
    head=strstr(data,"<h1>");
    if(head!=NULL)
    {
        head=head+strlen("<h1>");
        tail=strstr(head,"</h1>");
        if(tail!=NULL)
        {
            tail[0]='\0';
            puts(head);
        }
    }
    return 0;
}
