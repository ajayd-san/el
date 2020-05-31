#include <stdio.h>
#include <stdlib.h>

int *record_array (int *size);
void print_array (int *array_ptr, int *size);

void print_array (int *array_ptr, int *size)
{
    for (int index = 0;index < *size;++index)
    {
        printf("%d ",array_ptr[index]);
    }
}

int* record_array (int *size)
{
    int *array_ptr = (int*)malloc(*size*sizeof(int));
    for (int index = 0;index < *size;++index)
    {
        printf("enter %d element", index);
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

    array = record_array(&size);
    print_array(array,&size);

    free(array);



    return 0;
}