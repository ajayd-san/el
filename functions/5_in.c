#include <stdio.h>

void swap_ref(int num1, int num2);
int swap_function (int num1, int num2);


void swap_ref(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("First number using call by refrence:%d",num1);
    printf("\nSecond number using call by refrence:%d",num2);
}

/* int swap_function(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
    return num1 && num2;
} */

int main()
{   
    int num3 = 2, num4 = 1;
    swap_ref(num3,num4);
    swap_ref(&num3,&num4);

    return 0;
}