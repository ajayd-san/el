#include <stdio.h>

int main()
{
    int array1 [100] = {};
    int array2 [100] = {};
    size_t size1 = 0, size2 = 0;


    // recording array1

    printf("Enter size of array1:");
    scanf("%d", &size1);

    for (size_t index = 0;index < size1;++index)
    {
        printf("Enter element %d:",index);
        scanf("%d", &array1[index]);
    }
    
    //recording array2

    printf("Enter size of array2:");
    scanf("%d", &size2);

    for (size_t index = 0;index < size2;++index)
    {
        printf("Enter element %d:", index);
        scanf("%d", &array2[index]);
    }


    // finding smallest size
    int search_limit = 0;
    if (size1 > size1)
        search_limit = size1;
    else
        search_limit = size2;
    // searching for matches
    for (size_t index = 0;index < search_limit;++index)
    {
        if (array1[index] == array2[index])
        {
            printf("Match happens at index location '%d' for value '%d'\n", index, array1[index]);
        }
    }

    
    return 0;
}