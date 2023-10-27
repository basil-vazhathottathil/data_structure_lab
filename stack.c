#include<stdio.h>
int top=-1,size,stack[10];

void push();
void peek();
void pop();
void display();


void main()
{
	int choice;
	printf("\nenter the size of the stack\n");
	scanf("%d",&size);
	do
		{
			printf("\nmenu\n1.push \t2. pop data\t3.peek\t4.display\t5.exit\n");
			scanf("%d",&choice);
			switch(choice)
				{
					case 1:
						{ push();
						break;}
					case 2:
						{ pop();
						break;}
					case 3:
						{ peek();
						break;}
					case 4:
						{ display();
						break;}
					default:
						{
							if(choice==5)
								break;
							else
								printf("\nincorrect choice\n");
						}
				}
		}while(choice!=5);
}
void push()
		{
			int data;
			if(top==size-1)
				{
					printf("\noverflow\n");
				}
			else
				{
					top++;
					printf("\nenter the data\n");
					scanf("%d",&stack[top]);
				}
		}
		
void pop()
	{
		int del_data;
		if(top==-1)
			printf("\nunderflow\n");
		else
			{
				int del_data=stack[top];
				printf("\nthe data %d has been deleted\n",del_data);
				top--;
			}
	}
	
void peek()
	{
		if (top==-1)
			printf("\nthe stack is empty\n");
		else
			printf("the top value is %d \n", stack[top]);
	}
		
void display()
	{
		if (top==-1)
			printf("\nthe stack is empty\n");
		else
			{	
				printf("\nthe stack is :\n\n");
				for(int i=top;i>=0;i--)
					{
						printf("%d\t",stack[i]);
					}
			}
	}
