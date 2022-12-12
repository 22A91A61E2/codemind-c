#include<stdio.h>
int main()
{
    int n=3,c,i,p=1;
    int a[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        p=p*a[i];
        c=(2*p*512)/1024;
    }    
    printf("%dKB",c);
}