#include<stdio.h>
void main()
{
	int row_size,col_size;
	printf("\nenter the number of rows and columns\n");
	scanf("%d%d",&row_size,&col_size);
	int sparse_matrix[row_size][col_size];
	printf("\nenter the values of the sparse matrix\n");
	for(int i=0;i<row_size;i++)
	{
	for(int j=0;j<col_size;j++)
		{
		scanf("%d",&sparse_matrix[i][j]);
		}
	}
	//triple form
	int total_non_0=0;
	struct triple_form{
		int row,col,non_0;
		}value[10];
	int k=1;
	for(int i=0;i<row_size;i++)
		{
		for(int j=0;j<col_size;j++)
			{
			if(sparse_matrix[i][j]!=0)
				{
				value[k].row=i;
				value[k].col=j;
				value[k].non_0=sparse_matrix[i][j];
				total_non_0++;
				k++;
				}
			value[0].row=row_size;
			value[0].col=col_size;
			value[0].non_0=total_non_0;
			}
		}
	printf("\nrow\tcolumn\tnon-0 value\n");
		for(int i=0;i<=total_non_0;i++)
			{
			printf("%d\t%d\t%d\n",value[i].row,value[i].col,value[i].non_0);
			}	
}
