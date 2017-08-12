#include <stdio.h>

int main(void)
{
    int i,j;

    for(i=i;i<10;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%2d ",j,i,j*i);
        }
        printf("\n");
    }
    return 0;
}

