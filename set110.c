#include<stdio.h>
int main()
{
    long int m;
    long int hex=0,rem,l=1;
    scanf("%ld",&m);
    while(m>0)
    {
        rem=m%10;
        hex=oct+rem*l;
        l=l*2;
        m=m/10;
    }
    printf("%lx",hex);
    
}
