#include <stdio.h>

int main()
{
    int matrix [100][100] = {};
    int row = 0, column = 0;

    printf("Enter rows:");
    scanf("%d", &row);
    printf("Enter column:");
    scanf("%d", &column);

    for (int i = 0;i < row;++i)
    {
        for (int j = 0;j < column;++j)
        {
            printf("Enter the element at %dth row and %d column:",i + 1,j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (size_t i = 0; i < row ;++i)
    {
        for (size_t j = 0; j < column ;++j)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    
    }
    // finding row sum
    int sum = 0;
    for (size_t i = 0;i < row;++i)
    {
        for (size_t j = 0;j < column;++j)
        {
            sum+=matrix[i][j];
        }
        printf("Sum of %dst row = %d; \t",i + 1,sum);
        sum = 0;
    }
    printf("\n");

    //finding column sum

    for (size_t j = 0;j < column;++j)
    {
        for (size_t i = 0;i < row;++i)
        {
            sum+=matrix[i][j];
        }
        printf("Sum of %dst column = %d;\t",j+1, sum);
        sum = 0;
    }


    return 0;
}