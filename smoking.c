//冒泡排序法
#include <stdio.h>

int main(void)
{
    int s[10]={15,959,9,95,6,61,554,65,60,20};
    int i,j,temp;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(s[j]>s[j+1])
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }

    for(i=0;i<10;i++)
        printf("%d ",s[i]);
    printf("\n");
    return 0;
}
