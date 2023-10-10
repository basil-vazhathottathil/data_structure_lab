#include<stdio.h>
void main()
{
	int n,x,flag=0,count=0;
	count+=2;
	//count increment to 2 for assignment
	printf("enter the size of the array\n");
	scanf("%d",&n);
	count++;
	int arr[n];//array of size n
	printf("enter the values of the array\n");
	for(int i=0;i<n;i++)
		{
			count++;
			scanf("%d",&arr[i]);
			count++;
		}
	printf("enter the value needed to be searched\n");
	scanf("%d",&x);
	// x is variable to which the value to be searched is assigned
	count++;
	for(int i=0;i<n;i++)
		{
			if(x==arr[i])
				{
					count++;
					flag=1;
					printf("the position : %d\n",i+1);
					count++;
				}
			count++;
		}//loop to check and print position
	if (flag==0)
		{
			printf("value not found\n");
			count+=3;
		}//if x isnt there
	printf("\nthe time complexity is : %d\n",count);
	printf("\nSpace complexity is : %d\n",20+4*n);	
}  
