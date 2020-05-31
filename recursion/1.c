#include <stdio.h>

int natural (int n);

int natural (int n)
{   
    if (n==1)
        return n;
    return  n + natural(n - 1);
}
int main()
{
    int n = 0;
    printf("Enter n:");
    scanf("%d", &n);
    printf("%d", natural(n));
    return 0;
}