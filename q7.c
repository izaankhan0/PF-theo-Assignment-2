#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>

void arrayCreate(char array2D[6][5]){
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			array2D[i][j] = 'A' + (rand() % 26);
		}
	}
	array2D[5][0] = '0';
    array2D[5][1] = '9';
    array2D[5][2] = '9';
    array2D[5][3] = '4';
	array2D[5][4] = 'A' + (rand() % 26);	
	
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			printf("%c\t", array2D[i][j]);	
		}
		printf("\n");
		printf("\n");
	}
	printf("%c\t", array2D[5][0]);	
	printf("%c\t", array2D[5][1]);	
	printf("%c\t", array2D[5][2]);	
	printf("%c\t", array2D[5][3]);	
	printf("%c\t", array2D[5][4]);	
	
}

int findStr(char array2D[6][5], const char *strToFind){
    int len = strlen(strToFind);

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j <= 5 - len; j++) {
            int found = 1;
            for(int k = 0; k < len; k++) {
                if(array2D[i][j + k] != strToFind[k]) {
                    found = 0;
                    break;
                }
            }
            if(found) 
				return 1;
		}
    }

    for(int j = 0; j < 5; j++) {
        for(int i = 0; i <= 6 - len; i++) {
            int found = 1;
            for(int k = 0; k < len; k++) {
                if(array2D[i + k][j] != strToFind[k]) {
                    found = 0;
                    break;
                }
            }
            if(found) 
				return 1;
        }
    }

    return 0;
}

void main(){
	char array2D[6][5];
    char searchStr[20];
    int score = 0;
    srand(time(0));
    printf("\n\nIMPORTANT: PLEASE PLAY WITH CAPSLOCK ON\n\n");
    while (1) {
        arrayCreate(array2D);
        
        printf("\n\n");
        printf("Enter a string to search (or 'END' to stop): ");
        scanf("%s", searchStr);
        
        if (strcmp(searchStr, "END") == 0) 
			break;
        if (findStr(array2D, searchStr)) {
            printf("%s is present. Score: %d\n", searchStr, ++score);
        } else {
            printf("%s is NOT present. Score: %d\n", searchStr, --score);
        }
	}
	
}