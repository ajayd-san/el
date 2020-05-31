#include <stdio.h>

int power (int num, int n);

int power (int num, int n)
{
    if (n == 1)
        return num;
    return num*power(num,n - 1);
}
int main()
{
    int n = 0;
    int num = 0;
    printf("Enter base:");
    scanf("%d", &num);
    printf("Enter power");
    scanf("%d",&n);
    printf("%d", power(num,n));

    return 0;
}