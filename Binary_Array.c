#include<stdio.h>
int main()
{
    int n,i,t=0,x;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        x=arr[i];
    }
    if(x==0 or x==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}