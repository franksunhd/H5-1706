#include <stdio.h>
#define N 5
int main(void)
{
    int i,j;
    int data[N][N];
    
    for(i=0;i<N;i++)
    {
        data[i][0]=1;
        data[i][i]=1;
    }
    for(i=2;i<N;i++)
    {
        for(j=1;j<i;j++)
        {
            data[i][j]=data[i-1][j-1]+data[i-1][j];
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d ",data[i][j]);
        printf("\n");
    }
    return 0;
}
