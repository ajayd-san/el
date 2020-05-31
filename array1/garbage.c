#include <stdio.h>

int main()
{
    int array [100] = {2,1,5};
    size_t size = 3;
    /* scanf("%d", &size);

    for (int index = 0;index < size;++index)
    {
        scanf("%d", &array[index]);
    } */
    //3 1 5 1 3 2

    for (int i = 0;i < size;++i)
    {
        for (int index = 1;index <size;++index)
        {
            if (array[index ] < array[index - 1])
            {
                int temp = array[index - 1];
                array[index - 1] = array[index];
                array[index] = temp;
            }
        }
    }

    for (int index = 0;index < size;++index)
    {
        printf("%d ",array[index]);
    }

    return 0;
}