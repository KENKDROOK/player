#include<stdio.h>
#include<string.h>
int main()
{
    long int k,n,l=0,s=0,rem,v;
    scanf(" %ld %ld",&n,&k);
    v=n;
    while(v)
    {
        v=v/10;
        s++;
    }
    while(n)
    {
        rem=n%10;
        if(rem>=0 && rem<=k)
        {
            l++;
        }
        n=n/10;
    }
    if(l==s)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
