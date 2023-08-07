#include<stdio.h>
int main()
{
    int t,n,i,a[100],sum=0,sum1=0,sum2;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d
",&a[i]);
    }
    scanf("%d",&n);
    for(i=0;i<t;i++)
    {
        if(a[i]<=n)
        {
            sum=sum+1;
        }
        else
        {
            sum1=sum1+2;
        }
    }
    sum2=sum+sum1;
    printf("%d",sum2);
    
}