#include <stdio.h>

int main()
{
    int array [100] = {};
    printf("enter size of array:");
    int size = 0;
    scanf("%d", &size);

    for (int index = 0;index < size;++index)
    {
        printf("enter the element in %d index:", index);
        scanf("%d",&array[index]);
    }

    for (int index = 0;index < size;++index)
    {
        printf("%d ", array[index]);
    }
    return 0;
}