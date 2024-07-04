#include<stdio.h>
int main()
{
    int a[5],n,i,max;
    printf("enter the limit of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    printf("max=%d",max);
    return 0;
   
}