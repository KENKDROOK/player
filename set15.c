#include <stdio.h>
int main()
{
    long int n,l[100],i=0,k,p,t,s,v=1,rem;
    scanf("%ld %ld %ld",&n,&k,&p);
    t=n;
    while(t>0)
    {
        t=t/10;
        v=v*10;
    }
    v=v/10;
    while(n>0)
    {
        rem=n/v;
        l[i]=rem;
        i++;
        n=n%v;
        v=v/10;
    }
    while(k>0)
    {
        s=l[p];
        k--;
        p++;
    }
    printf("%ld ",s);
    return 0;
}
