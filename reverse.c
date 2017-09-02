#include <stdio.h>
#include <string.h>
 
char buf[30] = "   hello   my   world   ";

void reverse(char *s){
    char * head = strtok(s," ");
    
    if(head == NULL)
    {
        return;
    }
    else {
        reverse(head + strlen(head) + 1);
        printf(" %s",head);
    }
}

int main(void){
    reverse(buf);
    putchar('\n');
    return 0;
}
