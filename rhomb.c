#include <stdio.h>

int main(void)
{
    int a[7]={3,2,1,0,1,2,3};
    int b[7]={1,3,5,7,5,3,1};

    int i,j,k;
    for(k=0;k<7;k++)
    {
        for(j=0;j<a[k];j++)
            printf(" ");
        for(i=0;i<b[k];i++)
            printf("*");
        printf("\n");
    }
    return 0;
}
