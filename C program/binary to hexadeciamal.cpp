#include <stdio.h>
#include <string.h>
#include <math.h>
unsigned long binaryToDecimal(const char *binary) {
    unsigned long decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[length - 1 - i] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}
void decimalToHexadecimal(unsigned long decimal, char *hexadecimal) {
    sprintf(hexadecimal, "%lX", decimal);
}
int main() {
    char binary[65];  
    printf("Enter the binary number: ");
    scanf("%s", binary);
    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Invalid binary number.\n");
            return 1;
        }
    }
    unsigned long decimal = binaryToDecimal(binary);
    char hexadecimal[17];  
    decimalToHexadecimal(decimal, hexadecimal);
    printf("The hexadecimal representation is: %s\n", hexadecimal);
    return 0;
}

