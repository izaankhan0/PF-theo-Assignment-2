#include<stdio.h>
void main(){
	char arrayOrg[3][50] = {"Newww", "iifiiddddddddkkkkk", "ajeeebbbbbbb"};
	char arrayNew[3][50];
	//printf("%d\n\n", sizeof(arrayOrg)/50);
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < sizeof(arrayOrg[i])/sizeof(arrayOrg[i][0]); j++){
			if(arrayOrg[i][j] != arrayOrg[i][j+1]){
				arrayNew[i][j] = arrayOrg[i][j+1];
				//arrayNew[i][j+1] = arrayOrg[i][j+2];
			}
			//printf("%c",arrayOrg[i][j]);
		}
		//printf("\n");
	}
	
	printf("\n");
	for (int z = 0; z < 3; z++){
		for(int y = 0; y < sizeof(arrayNew)/sizeof(arrayNew[0]); y++){
			printf("%c",arrayNew[z][y]);
		}
		printf("\n");
	}
}