#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node*next;
};

void createLinkedList(struct node*head,int numberOfNodes)
{
    struct node*temp=head;
    for (int i = 0; i < numberOfNodes; i++)
    {
        int data;
        struct node*second=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value in node %d :",i+1);
        scanf("%d",&data);
        second->data=data;
        temp->next=second;
        temp=temp->next;
    }
    
}

void traversal(struct node*head)
{
    struct node*temp=head->next;
    while (temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void insertionAtBeggining(struct node*head,int data)
{
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->next=head->next;
    head->next=newNode;
    newNode->data=data;
}

int main()
{
    struct node*head,*first;
    head=(struct node*)malloc(sizeof(struct node));
    int n;
    printf("Enter the number of elements in the linked list.\n");
    scanf("%d",&n);
    createLinkedList(head,n);
    traversal(head);
    int element;
    printf("Enter the value to be add at beggining of linked list:");
    scanf("%d",&element);
    insertionAtBeggining(head,element);
    traversal(head);
}