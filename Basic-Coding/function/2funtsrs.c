#include<stdio.h>
int add()
{
    int a,b,sum;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
   // sum = a + b;
    //printf("addition %d\n\n",sum);
    return sum;

}
int main()
{
int c;
c=add();
printf("addition of two numbers is %d\n\n",c);
return 0;
}