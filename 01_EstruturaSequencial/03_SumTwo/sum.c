#include <stdio.h>

int main() {
    int num1, num2, result;

    printf("Choose two numbers: ");
    scanf("%i %i", &num1, &num2);

    result = num1 + num2;

    printf("The sum is: %i.\n", result);
    
    return 0;
}