#include<stdio.h>
int main()
{
    int n,a[100],i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            printf("%d ",a[i]);
        }
    }
    for(j=1;j<=n;j++)
    {
        scanf("%d",&a[j]);
        if(a[j]==1)
        {
            printf("%d ",a[j]);
        }
    }
}