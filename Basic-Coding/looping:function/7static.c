#include<stdio.h>
int a=10;
void fun()
{
    int static x=5;
    printf("fun=%d%d\n\n",x,a);
    a++;
    x++;

}
int main()
{
  fun();
  fun();
  fun();;
  printf("main=%d\n",a);
  return 0;
}