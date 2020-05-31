#include <stdio.h>
#include <stdlib.h>

void record_array(int *array_ptr, int *size);
void print_array(int *array_ptr,int *size);

void print_array (int *array_ptr,int *size)
{
    printf("1");
    for (int index = 0;index < *size;++index)
    {
        printf("1");
        printf("%d ",array_ptr[index]);
    }
}
void record_array (int *array_ptr, int *size)
{
    array_ptr = (int*)malloc(*size * sizeof(int));

    for (int index = 0;index < *size;++index)
    {

        printf("Enter element at %d", index);
        scanf("%d",&array_ptr[index]);
    }

}



int main()
{
    int size = 3;
    int *array_ptr = NULL;

    record_array(array_ptr,&size);
    print_array(array_ptr,&size);
    free(array_ptr);


    return 0;
}