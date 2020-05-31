#include <stdio.h>

int main()
{
    int *int_ptr = NULL;
    char *char_ptr = NULL;
    float *float_ptr = NULL;
    double *double_ptr = NULL;

    printf("The size of int pointer is %d\n", sizeof(int_ptr));
    printf("The size of char pointer is %d\n",sizeof(char_ptr));
    printf("The size fo float pointer is %d\n",sizeof(float_ptr));
    printf("The size of double pointer is %d\n", sizeof(double_ptr));



    return 0;
}