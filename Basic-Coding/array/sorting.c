#include<stdio.h>
int main()
{
    int a[]={4,7,2,9,5,7,3,8},i,j;
    int t;
    for(i=0;i<7;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<7;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}