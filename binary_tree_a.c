#include <stdio.h>

void main() {
	printf("\nEnter the number of nodes in the tree: ");
	int limit;
	scanf("%d",&limit);
	int array[limit];
	printf("\nEnter the values: ");
	for (int i=1; i<=limit;i++){
		scanf("%d",&array[i]);
	    }

	char choice='Y';
	while (choice == 'Y' || choice == 'y'){
		int n;
		printf("\nEnter the position: ");
		scanf("%d",&n);
		if (n>limit){
			printf("\nthere no such position in the tree\n");
			}
		else
			printf("the data at position %d is %d ",n,array[n]);

		if (n == 0)
		    printf("\nNo element\n");
		
		if (2 * n >limit)
		    printf("\nno left child\n");
		else
		    printf("\nLeft child: %d\n", array[2 * n]);
		
		if (2 * n + 1 > limit)
		    printf("\nno right child\n");
		else
		    printf("\nRight child: %d\n", array[2 * n + 1]);

		if (n / 2 >= 1)
		    printf("\nParent node: %d\n", array[n / 2]);
		else
		    printf("\nno parent for root node \n");
		 
		printf("\nDo you want to check another node (Y or N): ");
		scanf(" %c", &choice);
   	 }
}
