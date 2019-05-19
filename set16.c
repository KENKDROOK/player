#include <stdio.h>
int main()
{
    long int n,v,l=1;
    int sum,rem,a,b;
    scanf("%ld",&n);
    v=n;
    while(v>0)
    {
        v=v/10;
        l=l*10;
    }
    l=l/10;
        a=n/l;
        b=n%10;
        sum=a+b;
    printf("%d ",sum);
    return 0;
}
