#include <stdio.h>

int assign (int n [],int hash[],size_t size);

int assign (int n [],int hash [],size_t size)
{
    static int index = 0;
    for (index = 0;index < size;++index)
    {
        int hash_function = n[index] % 10;
        if (hash[hash_function] !=0)
            assign(n + 1 ,hash,size);
        hash[hash_function] = n[index]; 
    }    

    return hash;
}

int main()
{
    int n [100] = {10,45,6,5,2};
    int hash [100] = {};
    size_t size = 5;

    assign(n,hash,size);

    for (int index = 0;index < size;++index)
    {
        printf("%d ",hash[index]);
    }
    return 0;
}