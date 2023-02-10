#include <stdio.h>
#include <stdlib.h>

struct node
{
 int data;
 struct node *address;
 };
 
 void push();
 void pop();
 void peek();
 void display();
 
 struct node *top=0;
 
 void main()
 {
 int select,n;
 do
 {
 printf("Press below one\n1.Push\n2.Pop\n3.Peek\n4.Display\n");
 scanf("%d",&select);
 switch(select)
 {
 case 1:
 	push();
 	break;
 case 2:
 	pop();
 	break;
 case 3:
 	peek();
 	break;
 case 4:
 	display();
 	break;
 default:
 	printf("You entered the Wrong Number\n");
 	break;
 }
 
 printf("To Continue Press 1\n");
 scanf("%d",&n);
 }while(n);
 }
 
 void push()
 {
 struct node *newnode;
 newnode=(struct node *)malloc(sizeof(struct node));
 printf("Enter the New Data\n");
 scanf("%d",&newnode->data);
 newnode->address=top;
 top=newnode;
 
 }
 void pop()
 {
 struct node *temp;
 temp=top;
 top=temp->address;
 free(temp); 
 }
 void peek()
 {
 
 if(top==NULL)
 {
 printf("Stack is Empty\n");
 }
 else
 {
 printf("%d",top->data);
 }
 
 }
 void display()
 {
 struct node *temp;
 temp=top;
 if(top==NULL)
 {
 printf("Stack is Empty\n");
 }
 else
 {
 while(temp!=NULL)
 {
 printf("%d\t",temp->data);
 temp=temp->address;
 }
 }
 }
