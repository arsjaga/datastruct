#include <stdio.h>
#include <stdlib.h>
struct node 
{
int data;
struct node *preaddress;
struct node *nextaddress;
};

void create();
void addbegin();
void addmiddle();
void addend();
void deletebegin();
void deletemiddle();
void deleteend();
void display();

struct node *head,*temp,*newnode;
void main()
{

int select,n;
do
{
printf("Press Below one\n1.Create the Node\n2.Add Begin\n3.Add Middle\n4.Add End\n5.Delete Begin\n6.Delete Middle\n7.Delete End\n8.Display\n");
scanf("%d",&select);
switch(select)
{
case 1:
	create();
	break;
case 2:
	addbegin();
	break;
case 3:
	addmiddle();
	break;
case 4:
	addend();
	break;
case 5:
	deletebegin();
	break;
case 6:
	deletemiddle();
	break;
case 7:
	deleteend();
	break;
case 8:
	display();
	break;
default:
	printf("You Enter the Wrong Number\n");
	break;

}
printf("\nPress 1 to Continue \n");
scanf("%d",&n);
}while(n);

}


void create()
{
head=NULL;
int n;
do
{
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the Data :\n");
scanf("%d",&newnode->data);
newnode->preaddress=NULL;
newnode->nextaddress=NULL;
if(head==NULL)
{
head=temp=newnode;
}
else
{
temp->nextaddress=newnode;
newnode->preaddress=temp;
temp=newnode;
}

printf("Add more data press 1\n");
scanf("%d",&n);
}while(n);

}
void addbegin()
{
temp=head;
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the Data at Begin :\n");
scanf("%d",&newnode->data);
newnode->preaddress=NULL;
newnode->nextaddress=NULL;

newnode->nextaddress=temp;
temp->preaddress=newnode;
head=newnode;


}
void addmiddle()
{
temp=head;
int pos,i=1;
printf("Enter the Position to insert the Node\n");
scanf("%d",&pos);
while(i<pos)
{
temp=temp->nextaddress;
i++;
}

newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the Data at Middle :\n");
scanf("%d",&newnode->data);
newnode->preaddress=NULL;
newnode->nextaddress=NULL;


newnode->preaddress=temp;
newnode->nextaddress=temp->nextaddress;
newnode->nextaddress->preaddress=newnode;
temp->nextaddress=newnode;

}
void addend()
{
temp=head;
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the Data at End :\n");
scanf("%d",&newnode->data);
newnode->preaddress=NULL;
newnode->nextaddress=NULL;

while(temp->nextaddress!=NULL)
{
temp=temp->nextaddress;
}
temp->nextaddress=newnode;
newnode->preaddress=temp;

}
void deletebegin()
{
temp=head;
head=head->nextaddress;
head->preaddress=NULL;
free(temp);
}
void deletemiddle()
{

}
void deleteend()
{
temp=head;
while(temp->nextaddress!=NULL)
{
newnode=temp;
temp=temp->nextaddress;
}
newnode->nextaddress=NULL;
free(temp);
}
void display()
{
temp=head;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->nextaddress;
}
}
