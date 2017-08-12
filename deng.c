#include <stdio.h>
#define N 6

int main(void)
{ 
    int i,j,k=0;
    int a[N]={1,2,3,1,1,3};
    int b[N] = {'\0'};
    int n = 0;

    for(i = 1;i < N;i++)
    {
        int flog = 0;
        for(j = 0;j < i;j++)
        {
            if(a[i] == a[j])
                flog = 1;   
        }
        if(flog == 1)
        {
            for(k = 0;k <= n;k++)
            {
                if(a[i] == b[k])
                {
                    flog = 0;
                    break;
                }
            }
            if(flog == 1)
            {
                b[n] = a[i];
                n++;
            }

        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d=",b[i]);
        for(j=0;j<N;j++)
        {
            if(b[i]==a[j])
            {
                printf("a[%d] ",j);
            }

        }
        putchar('\n');
    }
    return 0;
}
