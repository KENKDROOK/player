#include<stdio.h>
int main()
{
    long int k,dec=0,rem,p=1;
    scanf("%ld",&k);
    while(k>0)
    {
        rem=k%10;
        dec=dec+rem*p;
        p=p*2;
        k=k/10;
    }
    printf("%ld",dec);
    return 0;
}   
