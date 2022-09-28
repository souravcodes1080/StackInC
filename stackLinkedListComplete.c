#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
};

struct node * top= NULL;

struct node* push();
struct node* pop();
void peek();
void display();

void main()
{
	int ch;
	while(1)
	{
		system("cls");
	    	printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\nEnter Choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				top=push();
				break;
			case 2:
				top=pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
		}
		getch();
	}
}

struct node* push()
{
	int item;
	struct node * newnode;
	newnode= (struct node *)malloc(sizeof(struct node));
	printf("\nEnter item: ");
	scanf("%d",&newnode->data);
	newnode->next=top;
	top=newnode;
	return top;
}

void display()
{
	struct node * temp;
	temp=top;
	if(temp==NULL)
	{
		printf("Stack empty!!");
	}
	else{
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
}

struct node* pop()
{
	struct node *temp;
	temp=top;
	if(temp==NULL)
	{
		printf("Underflow!!");
		return;
	}
	else
	{
		printf("Popped item: %d", temp->data);
		top=top->next;
		free(temp);
		return top;
	}
}

void peek()
{
	if(top==NULL)
		printf("Underflow");
	else
		printf("The peek value is:- %d", top->data);
}





















