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

void insertAtIndex(int array[],int usedSize,int index,int element)
{
    for (int i =  usedSize; i >= index; i--)
    {
        array[i+1]=array[i];

    }
    array[index]=element;
}

int main()
{
    int array[100] = {10, 20, 30, 40, 50, 60};
    int usedSize = 6,index,element;
    index=4;
    element =99;
    traversal(array,usedSize);
    insertAtIndex(array,usedSize,index,element);
    traversal(array,usedSize+1);
    return 0;
}