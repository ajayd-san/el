#include <stdio.h>

int main()
{
    int array [100] = {};
    int size = 0;

    printf("Enter size of array:");
    scanf("%d", &size);

    //recording array

    for (size_t index = 0;index < size;++index)
    {
        printf("element - %d :", index);
        scanf("%d", &array[index]);
    }

    // sorting using bubble sorting

    for (size_t i = 0;i < size;++i)
    {
        for (size_t index = 1;index < size;++index)
        {
            if (array[index] < array[index - 1])
            {
                int temp = array[index - 1];
                array[index -1] = array[index];
                array[index] = temp;
            }
        }
    }

   

    printf("Lowest:%d", array[0]);
    printf("\nHighest :%d", array[size -1]);

    return 0;
}