#include<stdio.h>
#include<stdlib.h>
 void push(int arr[],int n);
 int  pop(int arr[]);
 void peep(int arr[]);
 void disp(int arr[]);
 int top=-1;
 
 int main()
 {   int n,x,n1=1;
     printf("enter the size of the stack");
     scanf("%d",&n);
     int arr[n];
     
     while(n1!=0)
     {    
         
         printf("\n1->TO PUSH\n2->TO POP\n3->TO PEEP\n4->TO DISPLAY\n0->TO EXIT ");
          scanf("%d",&x);
         switch(x)
         {
             case 1:
             push(arr,n);
             break;
             case 2:
             pop(arr);
             break;
             case 3:
             peep(arr);
             break;
             case 4:
             disp(arr);
             break;
         }
         n1=x;
     }
     printf("%d",top);


 }
 void push(int arr[],int n)
 { int data;
     if(top==n-1)
     {
         printf("stack overflow");
     }
     else
     {
         printf("enter the data to be entered");
         scanf("%d",&data);
         top=top+1;
         arr[top]=data;
    }
     
 }
 int pop(int arr[])
 {   int data1;
     if(top==-1)
     printf("stack is empty (underflow)");
     else
     {
         data1=arr[top];
         top=top-1;
    }
    return data1;
     
 }
 void peep(int arr[])
 {   int data2;
     if(top==-1)
     {   
         printf("stack is empty\n");
     }
     else
     {
         data2=arr[top];
         printf("the top most element is %d",data2);
         
     }

 }
  void disp(int arr[])
 {
     int i;
     for(i=top; i>-1; i--)
     {
      printf(" %d ",arr[i]);
     }
 }
 