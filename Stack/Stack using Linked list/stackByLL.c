#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node*prev;
    int data;
    struct node*next;
};

void push(struct node*head,struct node*top){
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    struct node*temp=top;
    printf("Enter the value to push:");
    scanf("%d",&newNode->data);
    temp->next=newNode;
    newNode->prev=temp;
    newNode->next=NULL;
    top=newNode;
}

void pop(struct node*top){
    struct node*temp=top;
    top=top->prev;
    free(temp);
}

void traverse(struct node*head){
    struct node*temp=head->next;
    while (temp!=NULL)
    {
        printf("  %d",temp->data);
        temp=temp->next;
    }
}

int main(){

    printf("1.Push           2.Pop          3.Print          4.Exit\n");
    struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*top=head;
    head->prev=NULL;
    while(1){
    int n;
    printf("\nEnter operation: ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        push(head,top);
        break;
    
    case 2:
        pop(top);
        break;
    
    case 3:
        traverse(head);
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