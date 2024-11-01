#include <stdio.h>
#include <string.h>

void countChars(char *slogan) {
    int repeat[256] = {0};
    
    for (int i = 0; slogan[i] != '\0'; i++) {
        repeat[(char)slogan[i]]++;
    }


    printf("For \"%s\": {", slogan);
    int first = 1;
    for (int i = 0; i < 256; i++) {
        if (repeat[i] > 0) {
            if (!first) printf(", ");
            printf("'%c': %d", i, repeat[i]);
            first = 0;
        }
    }
    printf("}\n");
}

void main() {

    const char *slogans[] = {"buy now", "save big", "limited offer"};
    int num_slogans = sizeof(slogans) / sizeof(slogans[0]);

    for (int i = 0; i < num_slogans; i++) {
        countChars(slogans[i]);
    }
}
