#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sortString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
void arrInput(char *arr[], int count) {
    int printed[count];
    memset(printed, 0, sizeof(printed));

    for (int i = 0; i < count; i++) {
        if (printed[i]){
			continue;
		}
        char sortedWord[100];
        strcpy(sortedWord, arr[i]);
        sortString(sortedWord);

		printf("[ ");
        printf("%s ", arr[i]);
        printed[i] = 1;

        for (int j = i + 1; j < count; j++) {
            char sortedOther[100];
            strcpy(sortedOther, arr[j]);
            sortString(sortedOther);

            if (strcmp(sortedWord, sortedOther) == 0) {
                printf("%s ", arr[j]);
                printed[j] = 1;
            }
        }
        printf("]\n");
    }
}

int main() {
    char *words[] = {"eat", "tea", "tan", "ate", "nat", "bat", "tab", "abt", "atb"};
    int numWords = sizeof(words) / sizeof(words[0]);
    arrInput(words, numWords);
    return 0;
}
