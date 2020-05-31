#include <stdio.h>

int main()
{
    int array [100] = {};
    size_t size = 0;
    int frequency = 1;
    printf("Enter size of array:");
    scanf("%d", &size);
    
    //recording elements in array
    for (size_t index = 0;index < size;++index)
    {
        printf("element - %d:", index);
        scanf("%d", &array[index]);
    }

    // using bubble sort to arrange in ascending order

    for (size_t i = 0;i < size;++i)
    {
        for (size_t index = 1;index < size;++index)
        {
            if (array[index] < array[index - 1])
            {
                int temp = array[index];
                array[index] = array[index - 1];
                array[index -1] = temp;
            }
        }
    }

    for (size_t index = 0;index <size;++index)
    {
        printf("%d ", array[index]);
    }

    for (size_t index = 0;index < size;++index)
    {
        if (array[index] == array[index + 1])
        {
            ++frequency;
            continue;
        }
        printf("\n%d occurs %d times",array[index],frequency);
        frequency = 1;
    }
    return 0;
}