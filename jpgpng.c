//将后缀为jpg的文件修改为后缀为png的文件

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char buf[1024];
    fp =popen("ls *jpg","r");

    while(fgets(buf,1024,fp))
    {
        char cmd[1024];

        *strchr(buf,'.')='\0';
        sprintf(cmd,"mv %s.jpg %s.png",buf,buf);
        system(cmd);
    }
    pclose(fp);
    return 0;
}
