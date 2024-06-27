#include <stdio.h>
int simulatePipeline(int numInstructions) {
    int fetch_cycles = 1;   
    int decode_cycles = 1;  
    int execute_cycles = 1; 
    int total_cycles = 0;
    total_cycles = numInstructions * (fetch_cycles + decode_cycles + execute_cycles);
    return total_cycles;
}
int main() {
    int numInstructions;
    printf("Enter the number of instructions to simulate: ");
    scanf("%d", &numInstructions);
    int total_cycles = simulatePipeline(numInstructions);
    printf("Total clock cycles needed to complete %d instruction(s) in a 3-stage pipeline: %d cycles\n", numInstructions, total_cycles);
    return 0;
}

