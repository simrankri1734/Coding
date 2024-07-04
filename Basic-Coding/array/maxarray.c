#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},i,max;
    max=a[0];t6
    for(i=0;i<5;i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
    }
    printf("maximum value is %d",max);
    return 0;
}