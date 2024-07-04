#include<stdio.h>
void add()
    {
        int a,b,sum;
        printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("Addition: %d\n\n", sum);
}

int main()
 {
    add(); // Call the add function to perform addition
    return 0;
}

    
