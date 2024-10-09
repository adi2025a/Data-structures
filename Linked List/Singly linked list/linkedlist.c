#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void createNode(struct node *head)
{
    struct node *temp = head;
    printf("Enter the number of nodes in linked list:");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->next = NULL;
        printf("Enter the data in node %d:", i + 1);
        scanf("%d", &newNode->data);
        temp->next = newNode;
        temp = temp->next;
    }
}

void traversal(struct node *head)
{
    struct node *temp = head->next;
    while (temp != NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insertAtBeggining(struct node *head)
{
    struct node *temp = head;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->next = NULL;
    printf("Enter the data in New node:");
    scanf("%d", &newNode->data);
    newNode->next = head->next;
    head->next = newNode;
}

void insertAfterNode(struct node *head)
{
    struct node *temp = head;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->next = NULL;
    printf("Enter the data in New node:");
    scanf("%d", &newNode->data);
    int element;
    printf("Enter the element after which you want to insert the node:");
    scanf("%d", &element);
    while (temp->data != element)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insertAtEnd(struct node*head){
    struct node *temp = head;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->next = NULL;
    printf("Enter the data in New node:");
    scanf("%d", &newNode->data);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void deletionOfFirstNode(struct node*head){
    struct node*temp=head->next;
    head->next=temp->next;
    free(temp);
}

void deletionOfGivenNode(struct node*head){
    printf("Enter the element you want to delete from linked list:");
    int element;
    scanf("%d",&element);
    struct node*temp=head;
    while((temp->next)->data!=element){
        temp=temp->next;
    }
    struct node*temp2;
    temp2=temp->next;
    temp->next=temp2->next;
    free(temp2);
}

void deletionOfLastNode(struct node*head){
    struct node*temp=head,*temp2;
    while((temp->next)->next!=NULL){
        temp=temp->next;
    }
    temp2=temp->next;
    temp->next=NULL;
    free(temp2);
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    createNode(head);
    printf("Entered linked list---");
    traversal(head);
    printf("Enter the number corresponding to the operation.\n");
    printf("1.Insertion at beggining\n");
    printf("2.Insertion after a given node\n");
    printf("3.Insertion at the end\n");
    printf("4.Deletion of first node\n");
    printf("5.Deletion of a given node\n");
    printf("6.Deletion of last node\n");
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        insertAtBeggining(head);
        printf("Linked list now--\n");
        traversal(head);
        break;

    case 2:
        insertAfterNode(head);
        printf("Linked list now--\n");
        traversal(head);
        break;

    case 3:
        insertAtEnd(head);
        printf("Linked list now--\n");
        traversal(head);
        break;

    case 4:
        deletionOfFirstNode(head);
        printf("Linked list now--\n");
        traversal(head);
        break;

    case 5:
        deletionOfGivenNode(head);
        printf("Linked list now--\n");
        traversal(head);
        break;

    case 6:
        deletionOfLastNode(head);
        printf("Linked list now--\n");
        traversal(head);
        break;                
    default:
        break;
    }
}