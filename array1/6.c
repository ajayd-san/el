#include <stdio.h>

int main()
{
    int array [100] = {};
    size_t size = 0;

    printf("Enter size of array:");
    scanf("%d", &size);

    //recording elements in array
    for (size_t index = 0;index < size;++index)
    {
        printf("Enter the element in %d index:", index);
        scanf("%d",&array[index]);
    }

    //using bubble sort to sort in ascending order
    for (size_t i = 0;i < size;++i)
    {
        for (size_t index = 1;index < size;++index)
        {
            if (array[index] < array[index-1])
            {
                int temp = array[index - 1];
                array[index - 1] = array[index];
                array[index] = temp;
            }
        }
    }

    // finding and printing uniques elements
    printf("\nThe uniques elements found in the array are:");
    for (size_t index = 1;index < size;++index)
    {
        if (array[index] != array[index - 1] && array[index] != array[index + 1])
        {
            printf("%d ", array[index]);
        }
    }




    return 0;
}