#include<stdio.h>
int main()
{
    long int n;
    long int sum=0,rem,k=1;
    scanf("%ld",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*k;
        k=k*2;
        n=n/10;
    }
    printf("%lo",sum);
    
}
