#include <stdio.h>
#include <limits.h>
void non_restoring_division(int dividend, int divisor, int *quotient, int *remainder) {
    int n = sizeof(int) * 8;
    int A = 0;
    int Q = dividend;
    int M = divisor;
    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
    if (dividend < 0) Q = -dividend;
    if (divisor < 0) M = -divisor;
    for (int i = 0; i < n; i++) {
        A = (A << 1) | ((Q >> (n - 1)) & 1); 
        Q = Q << 1;
        if (A >= 0) {
            A = A - M;
            Q = Q | 1; 
        } else {
            A = A + M;
            Q = Q & ~1; 
        }
    }
    if (A < 0) {
        A = A + M; 
    }
    *quotient = sign * Q;
    *remainder = A * ((dividend < 0) ? -1 : 1); 
}
int main() {
    int dividend, divisor;
    int quotient, remainder;
    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);
    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }
    non_restoring_division(dividend, divisor, &quotient, &remainder);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}

