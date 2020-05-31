#include <stdio.h>

int main()
{
    int array [100] = {};
    size_t size = 0;
    int dupcounter = 0;

    printf("enter size of array:");
    scanf("%d", &size);

    // recording elements
    for (size_t index = 0;index < size;++index)
    {
        printf("enter the %d element:",index);
        scanf("%d", &array[index]);
    }


    //using bubble sort to sort in ascending order

    for (size_t i = 0;i < size;++i)
    {
        for (size_t index = 0;index < size;++index)
        {
            if (array[index + 1] < array[index] && index != size)
            {
                int temp = array[index + 1];
                array[index + 1] = array[index];
                array[index] = temp;
            }
        }
    }

    for (size_t index = 0;index < size;++index)
    {
        printf("%d ", array[index]);
    }
    

  

   /*  // checking for adjacent duplicate elements
    for (size_t index = 0;index < size;++index)
    {
        if (array[index] == array[index + 1])
            ++dupcounter;
    }

    printf("Total number of duplicate elements found in array are:");
    printf("%d", dupcounter);
    return 0; */
}