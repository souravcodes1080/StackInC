#include<stdio.h>
#include<stdlib.h>
#define maxsize 5

int stack[maxsize];
int top= -1;

void push();
void pop();
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
		}
		getch();
	}
}


void push()
{
	int item;
	printf("\nEnter item: ");
	scanf("%d",&item);
	if(top==maxsize-1)
	{
		printf("\nOverflow!!");
		return;
	}
	else
	{
		top++;
		stack[top]=item;
		printf("\n%d has been pushed", item);
	}
}

void pop()
{
	int temp;
	if(top==-1)
	{
		printf("\nUnderflow!!");
		return;
	}
	else
	{
		temp=stack[top];
		printf("\nThe poped item is: %d ",temp);
		top--;
	}
}

void peek()
{
	if(top==-1)
	{
		printf("\nStack empty!!");
		return;
	}
	else
	{
		printf("\nThe top element is: %d",stack[top]);
	}
}

void display()
{
	int i;
	if(top==-1)
	{
		printf("\nStack empty");
	}
	else{
		printf("\nStack is:-\n");
		for(i=top; i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}















