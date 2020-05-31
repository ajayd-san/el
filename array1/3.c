#include <stdio.h>

int main()
{
    int array [100] = {};
    size_t size = 0;
    printf("enter size of array:");
    scanf("%d", &size);
    int sum = 0;

    // recording elements
    for (int index = 0;index < size;++index)
    {
        printf("enter the %d element:", index);
        scanf("%d", &array[index]);
        sum += array[index];

    }

    printf("%d",sum);
    return 0;


}