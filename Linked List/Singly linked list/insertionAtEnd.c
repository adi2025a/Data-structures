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

void insertAtEnd(struct node*head,int data)
{
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    struct node*temp=head;
    newNode->data=data;
    newNode->next=NULL;
    while (temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=newNode;

}
int main()
{
    struct node*head;
    head=(struct node*)malloc(sizeof(struct node));
    int n,data;
    printf("Enter the number of elements in the linked list.\n");
    scanf("%d",&n);
    createLinkedList(head,n);
    traversal(head);
    printf("Enter the element you want to insert at end:");
    scanf("%d",&data);
    insertAtEnd(head,data);
    traversal(head);
    return 0;
}