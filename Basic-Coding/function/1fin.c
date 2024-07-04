#include<stdio.h>
void add(int,int);
int main()
{
  int a,b;
  printf("enter two numbers\n");
  scanf("%d%d",&a,&b);
  add(a, b);
  return 0;
}
void add(int x,int y)
{
    int c = x + y;
    printf("addition of two number=%d\n",c);
}