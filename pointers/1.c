#include <stdio.h>

int add_fucn(int *num1_ptr, int *num2_ptr);

int add_fucn(int *num1_ptr, int *num2_ptr)
{
    return *num1_ptr + *num2_ptr;
}

int main()
{
    int num1 = 0, num2 = 0;
    printf("Enter 1st number:");
    scanf("%d", &num1);
    printf("Enter 2nd number:");
    scanf("%d", &num2);

    printf("%d",add_fucn(&num1,&num2));
    

    return 0;
}