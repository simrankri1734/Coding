#include<stdio.h>
void add();
int main()
{
    add ();
    return 0;
}
void add()
{
    int a,b,sum;
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("addition=%d\n\n",a+b);
}