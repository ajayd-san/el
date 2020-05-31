#include <stdio.h>
#include <stdlib.h>

int* record_array (int *size_ptr);
int search (int *array_ptr,int *size_ptr);

int search (int *array_ptr, int *size_ptr)
{
    printf("Enter number to be searched :");
    int number = 0, signal = 0;
    scanf("%d", &number);
    for (int index = 0;index < *size_ptr ;++index)
    {
        if (array_ptr[index] == number)
        {
            signal = 1;
            break;
        }

    }
    return signal;


}

int* record_array (int *size_ptr)
{
    int *array_ptr = (int*)malloc(*size_ptr * sizeof(int));
    for (int index = 0;index < *size_ptr;++index)
    {
        printf("Enter array element %d:",index);
        scanf("%d", &array_ptr[index]);

    }

    return array_ptr;
}


int main()
{
    int size = 0;
    printf("Enter size:");
    scanf("%d", &size);
    int *array = NULL;

    array = record_array (&size);
    int signal = search(array,&size);

    if (signal == 1)
        printf("The number was found in the array ");
    else   
        printf("The number was not found in the array");



    free(array);


    return 0;
}