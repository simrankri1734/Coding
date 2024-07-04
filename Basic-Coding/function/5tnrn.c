#include<stdio.h>
int add(int a,int b)
    {
        return a+b;
    }
  int main()
  {
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    
    printf("addition=%d\n\n",a+b);
    // printf("Addition: %d\n\n", add(a, b));
    return 0;
  }
