//lowest
#include <stdio.h>

int main(void)
{
    int m,n,k,p,q;

    printf("Enter a fraction:");
    scanf("%d/%d",&m,&n);
    p=m;
    q=n;
    while(n>0)
    {
        k=m%n;
        m=n;
        n=k;
    }

    printf("In lowest terms:%d/%d\n",p/m,q/m);
    return 0;
}
