#include <stdio.h>

void swap (int *num1_ptr, int *num2_ptr);

void swap (int *num1_ptr, int *num2_ptr)
{
    int temp = *num1_ptr;
    *num1_ptr = *num2_ptr;
    *num2_ptr = temp;
}

int main()
{
    int num1 = 0, num2 = 0;
    printf("Enter num1:");
    scanf("%d", &num1);
    printf("Enter num2:");
    scanf("%d", &num2);
    swap(&num1,&num2);
    printf("The value of num1 is %d\n", num1);
    printf("The value of num2 is %d", num2);



    return 0;
}