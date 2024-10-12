#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node*prev;
    int data;
    struct node*next;
};

void createNode(struct node*head){
    
    int n;
    printf("Enter the number of nodes in the doubly Linked List:");
    scanf("%d",&n);
    struct node*temp=head;
    for (int i = 0; i < n; i++)
    {
        struct node*newNode=(struct node*)malloc(sizeof(struct node));
        newNode->prev=NULL;
        newNode->next=NULL;
        printf("Enter the data in node %d:",i+1);
        scanf("%d",&newNode->data);
        temp->next=newNode;
        newNode->prev=temp;
        temp=temp->next;
    }
}

void traversal(struct node*head)
{
    struct node*temp=head->next;
    while (temp!=NULL)
    {
        printf(" %d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void reverseTraversal(struct node*head){
    struct node*temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    
}

void insertAtBegginging(struct node*head){
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->prev=NULL;
    newNode->next=NULL;
    printf("Enter the data in new node:");
    scanf("%d",&newNode->data);
    newNode->next=head->next;
    (head->next)->prev=newNode;
    head->next=newNode;
}

void insertAtEnd(struct node*head){
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->prev=NULL;
    newNode->next=NULL;
    printf("Enter the data in new node:");
    scanf("%d",&newNode->data);
    struct node*temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
}

void insertAfterGivenElement(struct node*head){
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->prev=NULL;
    newNode->next=NULL;
    int element;
    printf("Enter the element after which you want to insert the node:");
    scanf("%d",&element);
    printf("Enter the data in new node:");
    scanf("%d",&newNode->data);
    struct node*temp=head,*temp1;
    while (temp->data!=element)
    {
        temp=temp->next;
    }
    temp1=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
    newNode->next=temp1;
    temp1->prev=newNode;
}

int main(){
    struct node*head=(struct node*)malloc(sizeof(struct node));
    createNode(head);
    printf("Doubly Linked List: ");
    traversal(head);
    // insertAtBegginging(head);
    // insertAtEnd(head);
    // insertAfterGivenElement(head);
    traversal(head);
    return 0;
}