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

void insertAfterGivenElement(int array[],int usedSize,int givenElement,int element)
{
    int i =usedSize;
    do
    {
        array[i+1]=array[i];
        i--;
    } while (array[i]!=givenElement);
    array[i+1]=element;
}

int main()
{
    int array[100] = {10, 20, 30, 40, 50, 60};
    int usedSize = 6,givenElement,element;
    givenElement=30;
    element =99;
    traversal(array,usedSize);
    insertAfterGivenElement(array,usedSize,givenElement,element);
    traversal(array,usedSize+1);
    return 0;
}