#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//conversion funtions

int BinaryToDecimal(int number) {
    int decimal = 0, base = 1, rem;
    while (number > 0) {
        rem = number % 10;
        decimal += rem * base;
        number /= 10;
        base *= 2;
    }
    return decimal;
}
int DecimalToBinary(int number) {
    int binary = 0, base = 1;
    while (number > 0) {
        int rem = number % 2;
        binary += rem * base;
        number /= 2;
        base *= 10;
    }
    return binary;
}
void HexadecimalToBinary(const char *hexNumba) {
    int decimal = (int)strtol(hexNumba, NULL, 16);
    printf("%d\n", DecimalToBinary(decimal));
}
void HexadecimalToDecimal(const char *hexNumba) {
    int decimal = (int)strtol(hexNumba, NULL, 16);
    printf("%d\n", decimal);
}
void BinaryToHexadecimal(int number) {
    int decimal = BinaryToDecimal(number);
    DecimalToHexadecimal(decimal);
}
void DecimalToHexadecimal(int number) {
    char hex[20];
    sprintf(hex, "%X", number);
    printf("%s\n", hex);
}


//main code
void main() {
    int choice, number;
    char hexNumba[20];
    
        printf("\nSelect a conversion option:\n");
        printf("1. Binary to Decimal\n");
        printf("2. Decimal to Binary\n");
        printf("3. Decimal to Hexadecimal\n");
        printf("4. Hexadecimal to Decimal\n");
        printf("5. Binary to Hexadecimal\n");
        printf("6. Hexadecimal to Binary\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a binary number: ");
                scanf("%d", &number);
                printf("Decimal: %d\n", BinaryToDecimal(number));
                break;
            case 2:
                printf("Enter a decimal number: ");
                scanf("%d", &number);
                printf("Binary: %d\n", DecimalToBinary(number));
                break;
            case 3:
                printf("Enter a decimal number: ");
                scanf("%d", &number);
                printf("Hexadecimal: ");
                DecimalToHexadecimal(number);
                break;
            case 4:
                printf("Enter a hexadecimal number: ");
                scanf("%s", hexNumba);
                printf("Decimal: ");
                HexadecimalToDecimal(hexNumba);
                break;
            case 5:
                printf("Enter a binary number: ");
                scanf("%d", &number);
                printf("Hexadecimal: ");
                BinaryToHexadecimal(number);
                break;
            case 6:
                printf("Enter a hexadecimal number: ");
                scanf("%s", hexNumba);
                printf("Binary: ");
                HexadecimalToBinary(hexNumba);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
}
//note: Remember to run test all cuz error araha thaa hex mai
