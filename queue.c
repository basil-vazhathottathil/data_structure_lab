#include<stdio.h>
int rear=-1,size,queue[10],front=0;

void enqueue();
void peek();
void dequeue();
void display();


void main()
{
	int choice;
	printf("\nenter the size of the queue\n");
	scanf("%d",&size);
	do
		{
			printf("\nmenu\n1.enqueue \t2. dequeue\t3.peek\t4.display\t5.exit\n");
			scanf("%d",&choice);
			switch(choice)
				{
					case 1:
						{ enqueue();
						break;}
					case 2:
						{ dequeue();
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
void enqueue()
		{
			if(rear>=size-1)
				{
					printf("\noverflow\n");
				}
			else
				{
					rear++;
					printf("\nenter the data\n");
					scanf("%d",&queue[rear]);
				}
		}
		
void dequeue()
	{
		int del_data;
		if(rear<front)
			printf("\nunderflow\n");
		else
			{
				del_data=queue[front];
				printf("\nthe data %d has been deleted\n",del_data);
				front++;
			}
	}
	
void peek()
	{
		if (rear<front)
			printf("\nthe queue is empty\n");
		else
			printf("the lower value is %d \n", queue[front]);
	}
		
void display()
	{
		if (front>rear)
			printf("\nthe queue is empty\n");
		else
			{	
				printf("\nthe queue is :\n\n");
				for(int i=front;i<=rear;i++)
					{
						printf("%d\t",queue[i]);
					}
			}
	}
