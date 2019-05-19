#include<stdio.h>
int main()
{
    int n,k,str[100],i,p;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&str[i]);
    }
    for(i=0;i<k;i++)
    {
        p=a[i];
        str[i]=str[i+1];
        str[i+1]=p;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",str[i]);
    }
    return 0;
}
