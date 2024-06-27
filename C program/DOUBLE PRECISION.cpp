#include <stdio.h>
#include <stdint.h>
void printBinary(uint64_t num) {
    for (int i = 63; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i == 63 || i == 52) 
            printf(" ");
    }
    printf("\n");
}
int main() {
    double num;
    printf("Enter a double-precision floating-point number: ");
    scanf("%lf", &num);  
    uint64_t binaryRep = *((uint64_t*)&num); 
    printf("Binary representation: ");
    printBinary(binaryRep);

    return 0;
}

