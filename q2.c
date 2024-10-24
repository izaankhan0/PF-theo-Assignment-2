#include<stdio.h>
int main(){
	char slogans[3][20] = {"buy now", "save big", "limited offer"};
	char current;
	for (int i = 0; i < 3; i++){
		printf("For \"%s\":  ", slogans[i]);
		for (int j = 0; j < sizeof(slogans[i])/sizeof(slogans[i][0]); j++){
			current = slogans[i][j];
			printf("%c", current );
		}
		printf("\n");
	}
	return 0;
}