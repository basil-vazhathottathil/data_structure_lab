#include<stdio.h>
void main()
{
	int limit;
	struct poly{
		int coef,exp;
		};
	printf("enter the total number of non 0 terms\n");
	scanf("%d",&limit);
	struct poly term[limit];
	for (int i=0;i<limit;i++)
		{
			printf("\nenter the coefficient of the term\n");
			scanf("%d",&term[i].coef);
			printf("\nenter the exponent of the term\n");
			scanf("%d",&term[i].exp);
		}
	printf("the polynomial\n");
	for(int i=0;i<limit;i++)
		{
			printf("%dx^%d ",term[i].coef,term[i].exp);
			if (i <limit-1)
				{
					printf("+");
				}
		}
}
