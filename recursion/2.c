#include <stdio.h>

int fib(int n);

int fib(int n)
{
    if (n < 3)
        return 1 ;
    
    else
        return fib(n-1) + fib(n -2);
}

int main()
{   
    int n = 4;
    printf("%d", fib(n));
    return 0;
}