#include<stdio.h>
int add(int,int);
int main()
{
    int a,b,c;
    printf("enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("addition is %d\n",c);
    return 0;
}
int add(int x,int y)
{
    return x+y;
}