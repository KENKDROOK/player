#include<stdio.h>
int main()
{
    long int n,s[100],i,p;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&s[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(i%2==0)
        {
            p=s[i];
            s[i]=s[i+1];
            s[i+1]=p;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%ld ",s[i]);
    }
    return 0;
}   
