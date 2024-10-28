#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void arrInput(int arr[], int size){
	int inp;
	for (int i = 0; i < size; i++){
		printf("Enter Element %d: ", i + 1);
		scanf("%d", &inp);
		arr[i] = inp;
	}
}
void horizontal(int arr[], int size) {
	printf("\n");
	printf("Horizontal Histogram");
	printf("\n");
	
	for (int j = 0; j < size; j++){
		printf("Value %d: ", j + 1);
		for (int z = 0; z < arr[j]; z++){
			printf("*");
		}
		printf("\n");
	}
}
void vertical(int arr[], int size) {

    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("\nVertical Histogram:\n");
    printf("\n");
    for (int i = max; i > 0; i--) {
        for (int j = 0; j < size; j++) {
            if (arr[j] >= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (int j = 0; j < size; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
}

void main(){
	int size = 4;
    int arr[size];

    arrInput(arr, size);
    horizontal(arr, size);
    vertical(arr, size);
}