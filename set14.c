#include<stdio.h>
int main()
{
    long int n,t,s[100],k=0,i,v=0,rem;
    scanf("%ld",&n);
    while(n>0)
    {
        rem=n%10;
        s[k]=rem;
        k++;
        n=n/10;
    }
    for(i=0;i<k;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            if(s[i]==s[j])
            {
                v=1;
                break;
            }
            else
            {
                v=0;
            }
        }
    }
    if(v==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}   
