#include <stdio.h>

int add (int a, int b);

int add (int a , int b)
{
    return a + b;
}

int main()
{
    int a = 0, b = 0;
    printf("Enter number 1:");
    scanf("%d", &a);
    printf("Enter number 2:");
    scanf("%d",&b);

    printf("%d", add(a,b));

    return 0;
}