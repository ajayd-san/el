#include <stdio.h>
int digit (int num);
int digit (int num)
{
    static int rem = 0;
    static int counter = 1;
    rem = num%10;
    if (rem != 0)
        return counter;
    else
        ++counter;
        return digit(num/10);

}
int main()
{
    int num = 0;
    printf("Enter number:");
    scanf("%d", &num);
    printf("%d", digit(num));


    return 0;
}