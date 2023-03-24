#include <stdio.h>
#include <math.h>

int main() {
    
    int num1, num2;
    float num3, result1, result2, result3;

    printf("Enter two integers: ");
    scanf("%d%d", &num1, &num2);

    printf("Enter a real number: ");
    scanf("%f", &num3);

    result1 = (2 * num1) * (num2 / 2.0);
    result2 = (3 * num1) + num3;
    result3 = pow(num3, 3);

    printf("The product of the double of the first number and half of the second number is: %.2f\n", result1);
    printf("The sum of the triple of the first number and the third number is: %.2f\n", result2);
    printf("The third number raised to the third power is: %.2f\n", result3);

    return 0;
}