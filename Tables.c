#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++)
    {
        if(i%2!=0)
        {
            int p;
            p=a*i;
            printf("%d x %d = %d
",a,i,p);
        }
    }
}