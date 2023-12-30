#include<stdio.h>
#include<stdlib.h>

struct block
{
    int data;
    struct block *next;
};

typedef struct block node;

void append(node **pthead, int val)
{
    node *p,*t;
    p = (node*)malloc(sizeof(node));
    p->data = val;
    p->next = NULL;
    if (*pthead==NULL)
    {
        *pthead = p;
    }
    else
    {
        t = *pthead;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=p;
    }
}

void disp(node *h)
{
    while(h!=NULL)
    {
        printf("\n%d",h->data);
        h=h->next;
    }
}

void addbeg(node **pthead, int val)
{
    node *p;
    p = (node*)malloc(sizeof(node));
    p->data=val;
    p->next=*pthead;
    *pthead=p;
}

node* searchbyval(node *h,int key)
{
    while (h!=NULL)
    {
        if(h->data==key)
        {
            return h;
        }
        else
        {
            h=h->next;
        }
    }
    return NULL;
}

int count(node *h)// Number of Nodes present int the Linked List...
{
    while (h!=NULL)
    {
        int count= count + 1;
    }
    
}

node* searchbypos(node *h, int n)// Exact Position of the nth Node
{
    int i;
    for (i = 1; i < n; i++)
    {
        h=h->next;
    }
    return h;
}

void insafter(node *t,int val)
{
    node *p;
    p = (node*)malloc(sizeof(node));
    p->data = val;
    p->next=t->next;
    t->next=p;
}

void delbeg(node **pthead)
{
    if (*pthead == NULL)
    {
        return;
    }
    
    node *t = *pthead;
    *pthead = (*pthead)->next;
    free(t);
}

void delafter(node *t)
{
    node *p;
    p = t->next;
    t->next = p->next;
    free(p);
}

int main()
{
    node*head = NULL;
    append(&head,5);
    append(&head,15);
    append(&head,25);
    append(&head,55);
    append(&head,105);
    disp(head);
}