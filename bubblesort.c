#include<stdio.h>
void main()
	{
		int count=0,array[10],limit,temp;
		count++;
		printf ("enter the size of the array\n");
		scanf("%d",&limit);
		count++;
		printf("enter the values of the array\n");
		for(int i=0;i<limit;i++)
			{
				count++;
				scanf("%d",&array[i]);
				count++;
			}
		count++;
		for(int i=0 ;i<limit;i++)
			{
				count++;
				for (int j=0;j<limit-i-1;j++)
					{
						count++;
						if(array[j]>array[j+1])
						{
							temp=array[j];
							array[j]=array[j+1];
							array[j+1]=temp;
							count+=4;
						}
				}
				count++;
		}
		count++;
		for (int i=0;i<limit;i++)
			{
				count++;
				printf("%d\t",array[i]);
				count++;
			}
			count++;
		printf("\n\n");
		count+=2;
		printf("the time complexity is %d\n",count);
		printf("the space complexity is %d\n",20+4*limit);
	}
