#include<stdio.h>
int main()
{
    int a[5],i,sum,n;
    printf("enter the 5 value of array");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    sum=0;
    for(i=0;i<5;i++)
    {
        sum = sum + a[i];
    }
    printf("sum of value is %d",sum);
    return 0;
}