#include <stdio.h>
void fetch() 
{
    printf("Fetch stage complete.\n");
}
int execute(int A, int B) 
{
    int result = A + B;
    printf("Execute stage complete.\n");
    return result;
}

int main() 
{
    int A,B;
	printf("enter A:");
	scanf("%d",&A);
	printf("enter B:");
	scanf("%d",&B);
    int result; 
    fetch();
    result = execute(A, B);
    printf("Addition result: %d\n", result);
    return 0;
}


