#include<stdio.h>
int main()
{
    long int m,n,sum=0,i;
    scanf("%ld %ld",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("%ld",sum);
    return 0;
}
