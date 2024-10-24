#include<stdio.h>
void main(){
	
	int inp, min1 = 9999, min2 = 9999,minIndex1,minIndex2;
	int array[5];
	for (int i = 0; i < 5;){
			printf("Enter the Element - %d: ", i);
			scanf("%d", &inp);
			if(inp < 9999){
				array[i] = inp;
				i++;
			}
	}
	for (int j = 0; j < 5; j++){
		if(array[j]< min1){
			min1 = array[j];
			minIndex1 = j;
		}
	}
	array[minIndex1] = 9999;
	for (int z = 0; z < 5; z++){
		if(array[z]< min2){
			min2 = array[z];
			minIndex2 = z;
		}
	}
	
	printf("\n");
	printf("The second smallest Element in the Array is: %d", min2);
	
}