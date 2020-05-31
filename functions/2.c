#include <stdio.h>

struct student_data
{
    char name[20];
    int reg;
    int class;
};

int main()
{
    printf("How many records would you like to store:");
    int size = 0;
    scanf("%d",&size);

    struct student_data log[size];

    for (size_t index = 0;index < size;++index)
    {
        printf("Enter name:");
        scanf("%s",&log[index].name);
        printf("Enter registration:");
        scanf("%d",&log[index].reg);
        printf("Enter class:");
        scanf("%d",&log[index].class);
    }

    // displaying data
    printf("Name\tregistration number\tclass\n");
    for (size_t index = 0;index < size;++index)
    {
        printf("%s\t\t%d\t\t\t%d",log[index].name,log[index].reg,log[index].class);
        printf("\n");
    }
    return 0;
}