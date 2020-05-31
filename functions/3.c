#include <stdio.h>

int natural (int n, int sum);
int natural (int n, int sum)
{
    
    if (n == 1)
        return sum;
    sum +=  n + natural(n - 1,sum);
}

int main()
{
    int n = 0;
    printf("Enter n:");
    scanf("%d", &n);
    int sum = 1;
    printf("%d", natural(n,sum));

    return 0;
}