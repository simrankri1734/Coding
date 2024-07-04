#include<stdio.h>
void area(float radius);
int main()
{
    float r;
    printf("enter radius\n");
scanf("%f",&r);
area(r);
return 0;
}
void area(float radius)
{
    float area=3.14 * radius * radius;
    printf("area=%f",3.14 * radius * radius);
}
