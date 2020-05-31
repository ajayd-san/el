#include <stdio.h>

int main()
{
    int array [100] = {};
    int size = 0;
    printf("enter size of array:");
    scanf("%d", &size);

    for (int index = 0;index < size;++index)
    {
        printf("enter elemene %d:",index);
        scanf("%d", &array[index]);
    }

    printf("The numbers in array are:");
    for (int index = 0;index <size;++index)
    {
        printf("%d ", array[index]);
    }

    printf("\nThe numbers in array in reverse order are:");
    // displaying in reverse order
    for (--size;size >= 0;--size)
    {
        printf("%d ", array[size]);
    }
    

    return 0;
}