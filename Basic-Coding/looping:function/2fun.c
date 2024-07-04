
#include<stdio.h>

void add(int a, int b);

int main() {
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    add(a, b);
    return 0;
}

void add(int x, int y) {
    int c = x + y;
    printf("Addition of two numbers = %d\n", c);
}






