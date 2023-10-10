#include<stdio.h>
void main()
	{
		int limit,count=0;
		count++;
		printf("\nenter the size of the array\n");
		scanf("%d",&limit);
		count++;
		int arr[limit];
		printf("\nenter the values of the array\n");
		for( int i=0;i<limit;i++)
			{
				scanf("%d",&arr[i]);
				count+=2;
			}
		count++;
		//selection sort
		int min_index,temp;
		for (int i=0;i<limit-1;i++)
			{
				count+=2;
				min_index=arr[i];
				for( int j=i+1;j<limit;j++)
					{
						count++;
						if (arr[j]<min_index)
							{
								count+=5;
								min_index=arr[j];
								temp=arr[i];
								arr[i]=min_index;
								arr[j]=temp;
							}
					}
				count++;
			}
		count++;
			
		
		//printing sorted array
		printf("\nthe sorted array is \n\n\n");
		for (int i=0;i<limit;i++)
			{
				count+=2;
				printf("%d\t",arr[i]);
			}
		printf("\n\n\n\n");
		count+=2;
		printf("\nthe time complexity is %d",count);
		printf("\nthe space complexity is %d",24+4*limit); 
	}
