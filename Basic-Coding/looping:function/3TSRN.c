#include<stdio.h>
    int add();
int main()
{
int c;
c=add();
printf("addition of two number is %d\n\n",c);
return 0;
}
int add()
{
    int a,b,sum;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("addition %d\n\n",sum);
    return sum;
}
