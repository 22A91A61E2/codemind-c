#include<stdio.h>
int main()
{
    int n,i,t=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);  
    }  
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            t=1;
            break;
        }
    }
    if(t==1)
    printf("False");
    else
    printf("True");
}