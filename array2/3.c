#include <stdio.h>

int main()
{
    int array1 [100] = {};
    int array2 [100] = {};
    int array3 [100] = {};
    size_t size1 = 0, size2 = 0, size3 = 0;
    
    // recording array1
    printf("Enter size of array1:");
    scanf("%d", &size1);

    for (size_t index = 0;index < size1;++index)
    {
        printf("Enter the %dth element of array1:",index);
        scanf("%d",&array1[index]);
    }

    // recording array2
    printf("Enter size of array2:");
    scanf("%d", &size2);

    for (size_t index = 0;index < size2;++index)
    {
        printf("Enter the %dth element of array2:");
        scanf("%d", &array2[index]);
    }

    //recording array3
    printf("Enter size of array3:");
    scanf("%d",&size3);

    for (size_t index = 0;index < size3;++index)
    {
        printf("Enter the %dth element of array3:");   
        scanf("%d",&array3[index]);
    }

    // merging array2 into array1

    for (size_t index = 0;index < size2;++index)
    {
        array1[index + size1] = array2[index];
    }
    // merging array3 into array1
    for (size_t index = 0;index < size3;++index)
    {
        array1[index + size1 + size2] = array3[index];
    }

    
    int merged_size = size1 + size2 + size3;
    // printing array1
    for (size_t index = 0;index < merged_size ;++index)
    {
        printf("%d ", array1[index]);
    }
    

    return 0;
}