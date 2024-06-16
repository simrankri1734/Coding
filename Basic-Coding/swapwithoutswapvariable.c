#include<stdio.h>
int main()
{
  int x=4,y=5;
  x=x+y;
  y=x-y;
  x=x-y;
  printf("x=%d,y=%d",x,y);
  return 0;


}