# include<stdio.h>
int main()
{
    int x=5,y=10,t;
    t=x;
    x=y;
    y=t;
    printf("x=%d,y=%d\n",x,y);
    return 0;
}