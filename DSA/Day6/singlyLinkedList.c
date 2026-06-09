#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
void beginInsert(){
    struct node *ptr;
    int element;
    ptr= (struct node *)malloc(sizeof(struct node *));

    if(ptr==NULL){
        printf("\nOverflow!!");
    }

    else{
        printf("\nEnter value: ");
        scanf("%d", &element);

        ptr->data=element;
        ptr->next=head;
        head=ptr;
        printf("Item Inserted!");
    }
}

void display(){
    struct node *ptr;
    ptr=head;
    if(ptr == NULL){
        printf("Nothing to print!");
    }
    else{
        printf("\nPrinting values..\n");
        while(ptr!=NULL){
            printf("%d ", ptr->data);
            ptr=ptr->next;
        }
    }
}

int main(){
    int choice=0;
    while(choice!=4){
        printf("\n\n*...Choose one option of the following...* \n1. Insert 2. Show 3. Exit");
        printf("\nEnter Your Choice(1/2/3): ");

        scanf("%d",&choice);

        switch(choice){
            case 1:
                beginInsert();
                break;
            case 2:
                display();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid Input!!");
        }
    }
    return 0;
}