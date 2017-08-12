//偶数平方和
#include <stdio.h>
#include <math.h>
int main(void)
{
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        printf("The number of Square is : %d\n",i*i);
    }

    return 0;
}

