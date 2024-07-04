#include<stdio.h>
int add(int x,int y)
{
    return x+y;
}
int main()
{
    int a,b,c;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("addition is %d\n",c);
    return 0;
}
