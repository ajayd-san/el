#include <stdio.h>

int main()
{
    int common [100] = {1,3,2,4,7,5,8};
    int odd [100] = {};
    int even [100] = {};
    int size =7;
    size_t odd_index = 0, even_index = 0;
    for (size_t index = 0;index < size;++index)
    {
        if (common[index]%2 == 0)                                                       //even
        {
            even[even_index] = common[index];
            ++even_index;
        }   

        else                                                                            //odd
        {
            odd[odd_index] = common[index];
            ++odd_index;
        }
        
    }

    printf("The even elements are:");
    // printing even array
    for (size_t index = 0;index < even_index;++index)
    {
        printf("%d ", even[index]);
    }

    //printing odd array
    printf("\nThe odd elements are:");
    for(size_t index = 0; index < odd_index;++index)
    {
        printf("%d ", odd[index]);
    }

}