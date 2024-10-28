#include<stdio.h>

int sticks(int inp){
    if (inp % 5 == 0) {
        return -1;
    } else {
        return inp % 5;
    }
}

void main() {
	int inp;
    printf("Enter the number of matchsticks: ");
    scanf("%d", &inp);

    int result = sticks(inp);

    if (result == -1) {
        printf("It is not possible for A to confirm a win.\n");
    } else {
        printf("A should pick %d matchsticks on his first turn to make sure he wins.\n", result);
    }
}