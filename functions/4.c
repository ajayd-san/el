#include <stdio.h>
int factorial_calc (int n);
int factorial_calc (int n)
{
    int factorial = 1;
    if (n == 1)
        return factorial;
    return n*factorial_calc(n -1);
}
int main()
{
    int n = 0;
    printf("Enter n:");
    scanf("%d", &n);
    printf("%d",factorial_calc(n));
    return 0;
}