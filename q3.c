#include<stdio.h>
#include <string.h>

char word(char arrayOrg[50]){
	char arrayNew[50];
	int charRemoved = 0;
	int f = 0;
		for (int j = 0; j < strlen(arrayOrg); j++){
			if (arrayOrg[j] != arrayOrg[j + 1]){
				arrayNew[f] = arrayOrg[j];
				f++;
			} else{
				charRemoved++;
			}	
		}
		for(int y = 0; y < strlen(arrayNew); y++){
			printf("%c",arrayNew[y]);
		}
	
	printf("\n");
	printf("%d Letters were Removed", charRemoved);
	printf("\n");
	printf("\n");
	return arrayNew;
}

void main(){

	word("booooook");
	word("coooool");
	word("heeeey");
	
}