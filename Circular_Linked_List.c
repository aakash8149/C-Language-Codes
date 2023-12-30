#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    
    struct node *head, *newnode, *temp;
    head = 0;
    int choice;
    while(choice != 0)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter The Data: ");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        
        if(head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            // Main Execution Code For Singly Linked List....
            temp->next = newnode;
            temp = newnode;
        }
        
        printf("Do You Want To continue [0 or 1]: ");
        scanf("%d", &choice);
    }
    temp->next = head;
    // Circular Linked List Printing Code
    //temp = head;
    
    printf("%d \n", temp->next->data);
    //temp = temp->next;
    
    return 0;
}