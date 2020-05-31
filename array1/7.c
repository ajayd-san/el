#include <stdio.h>

int main()
{
    int array1 [100] = {};
    int array2 [100] = {};  
    size_t size1 = 3, size2 = 3;
    int combined = size1 + size2;

    // recording array1
    printf("Enter size of array1:");
    scanf("%d", &size1);

    for (size_t index = 0;index < size1;++index)
    {
        printf("Enter element in %d index:");
        scanf("%d", &array1[index]);
    }

    //recording array2
    printf("Enter the size of array2:");
    scanf("%d",&size2);

    for (size_t index =0;index < size2;++index)
    {
        printf("Enter element in %d index :");
        scanf("%d", &array2[index]);
    }

    // merging array2 into array1
    for (size_t index = size1 ;index < size1 + size2;++index)
    {
        array1[index] = array2[index - size2];
    }

   

    // using bubble sort to sort in descending order

    for (size_t i = 0;i < size1 + size2 ;++i)
    {
        for (size_t index = 1;index < size1+ size2;++index)
        {
            if (array1[index - 1] < array1[index])
            {
                int temp = array1[index - 1];
                array1[index - 1] = array1[index];
                array1[index] = temp;
            }
            
        }
    
    }

    printf("The merged array in descending order:\n");
    for (size_t index = 0;index < size1 + size2; ++index)
    {
        printf("%d ",array1[index]);
    }

    return 0;
}