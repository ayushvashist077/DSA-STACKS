#include<stdio.h>
#include<stdlib.h>

struct node
{
    int num;
    struct node *next;
}*first=NULL,*last=NULL,*ptr,*newnd,*prev; 

struct node* create(int n)
{
    newnd=(struct node*)calloc(1,sizeof(struct node));
    newnd->num=n;
    newnd->next=NULL;
    return newnd;
}

void push()
{
    int nu;
    printf("\nEnter Value to push: ");
    scanf("%d",&nu);
    newnd=create(nu);
    if(first==NULL && last==NULL)
    {
        newnd->next=NULL;
        first=last=newnd;
    }
    else
    {
        last->next=newnd;
        last=last->next;
        last->next=NULL;
    }
}

void pop()
{
    ptr=first;
    while(ptr->next != NULL)
    { 
        prev=ptr;
        ptr=ptr->next;  
    }
        ptr->num=0;
        prev->next=NULL;
        last=prev;
}

void disp(struct node *ptr)
{
    if(ptr!=NULL)
    {
        disp(ptr->next);
        printf("%d",ptr->num);
    }

    
}

   void peek()
{   if(last==NULL)
     printf("Stack is empty");
     else
     printf(" %d ",last->num);
}

int main()
{
    while(1)
    {
    int ch;
    printf("\n1-> PUSH\n2-> POP\n3->PEEP\n4-> DISPLAY\n5-> Exit\nEnter Choice: ");
    scanf("%d",&ch);
    if(ch==1)
     push();
    else if(ch==2)
     pop();
     else if(ch==3)
     peek();
    else if(ch==4)
     disp(first);
    else
     exit(0);
    } 
     return 0;

}