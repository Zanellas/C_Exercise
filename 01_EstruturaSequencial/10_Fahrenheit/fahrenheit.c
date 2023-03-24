#include <stdio.h>

int main() {
    
    float celsius, fahrenheit;

    printf("Transform Celsius in Fahrenheit\n");
    printf("Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("Fahrenheit: %f", fahrenheit);

    return 0;
}