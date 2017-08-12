#include <stdio.h>
#include <string.h>

char data[1024*1024];
int main(void)
{
    while(fgets(data,1024*1024,stdin))
    {
        char *head;
        char *tail;

        head=strstr(data,"<title>");
        if(head!=NULL)
        {
            head+=strlen("<title>");
            tail=strstr(head,"</title>");
            if(tail!=NULL)
            {
                tail[0]='\0';
                puts(head);
            }
        }
        
        head=strstr(data,"krb");
        if(head!=NULL)
        {
            head+=strlen("krb' >");
            tail=strchr(head,'<');
            if(tail!=NULL)
            {
                tail[0]='\0';
                puts(head);
            }
        }
        
        head=strstr(data,"cbzz");
        if(head!=NULL)
        {
            head+=strlen("cbzz' >");
            tail=strchr(head,'<');
            if(tail!=NULL)
            {
                tail[0]='\0';
                puts(head);
            }
        }
    }
    return 0;
}
