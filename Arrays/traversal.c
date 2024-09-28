#include <stdio.h>
#include <stdlib.h>

void traversal(int array[],int usedSize)
{
    for (int i = 0; i < usedSize; i++)
    {
        printf("%d  ",array[i]);
    }
    printf("\n");
}

int main()
{
    int array[100] = {10, 20, 30, 40, 50, 60};
    int usedSize = 6;
    traversal(array,usedSize);
    return 0;
}