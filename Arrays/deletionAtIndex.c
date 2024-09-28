#include <stdio.h>
#include <stdlib.h>

void traversal(int array[],int *usedSize)
{
    for (int i = 0; i < *usedSize; i++)
    {
        printf("%d  ",array[i]);
    }
    printf("\n");
}

void deleteAtIndex(int array[],int *usedSize,int index)
{
    for (int i = index; i <*usedSize; i++)
    {
        array[i]=array[i+1];
    }
    *usedSize=*usedSize-1;
}

int main()
{
    int array[100] = {10, 20, 30, 40, 50, 60};
    int usedSize = 6,index;
    index=4;
    traversal(array,&usedSize);
    deleteAtIndex(array,&usedSize,index);
    traversal(array,&usedSize);
    return 0;
}