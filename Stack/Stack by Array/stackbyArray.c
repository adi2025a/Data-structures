#include <stdio.h>

void push(int array[], int *top)
{
    if (*top == 100)
    {
        printf("Stack overflow!!!!\n\n");
    }
    else
    {
        int element;
        printf("Enter the element to push: ");
        scanf("%d", &element);
        *top = *top + 1;
        array[*top] = element;
    }
}

void pop(int array[], int *top)
{
    if (*top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Popped element:%d", array[*top]);
        *top = *top - 1;
    }
}

void traverse(int array[], int *top)
{
    if (*top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        int temp = *top, i = 0;
        while (i <= temp)
        {
            printf("  %d", array[i]);
            i++;
        }
    }
}

int main()
{
    int array[100];
    int top = -1;
    printf("\n1.Push           2.Pop          3.Print          4.Exit\n");
    while (1)
    {
        printf("\nEnter operation:");
        int n;
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            push(array, &top);
            break;

        case 2:
            pop(array, &top);
            break;

        case 3:
            traverse(array, &top);
            break;

        case 4:
            return 0;
        default:
            printf("Invalid Command");
            break;
        }
    }
    return 0;
}