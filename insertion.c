#include <stdio.h>

void main(){
	int size;
	printf("\nenter the size of the array  ");
	scanf("%d",&size);
	int array[size];
	printf("\nenter the values  ");
	for(int i=0;i<size;i++){
		scanf("%d",&array[i]);
		}
		
	for(int i=1;i<size;i++){
		int j=i;
		while(array[j] < array[j-1] && j>0){
			int temp=array[j];
			array[j]=array[j-1];
			array[j-1]=temp;
			j=j-1;
			}
		}
	
	printf("\nthe sorted array \n");
	for(int i=0;i<size;i++){
		printf("%d  ",array[i]);
		}
	printf("\n");
}
