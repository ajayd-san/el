#include <stdio.h>

int main()
{
    int original [100] = {};
    int copy [100] = {};
    size_t size = 0;
    printf("enter size of array:");
    scanf("%d", &size);

    // recording array
    for (size_t index = 0;index < size;++index)
    {
        printf("enter element in %d index:",index);
        scanf("%d", &original[index]);
    }

    // copying contents in original to copy
    for (size_t index = 0;index <size;++index)
    {
        copy[index] = original[index];
    }

    // displaying elements in original
    printf("The elements in original array are:");
    for (size_t index = 0;index <size;++index)
    {
        printf("%d ", original[index]);
    }

    // displaying elements in copy

    printf("\nmThe elements in copy array are:");
    for (size_t index = 0;index < size;++index)
    {
        printf("%d ", copy[index]);
    }
    return 0;
}