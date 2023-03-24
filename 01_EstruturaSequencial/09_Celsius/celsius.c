#include <stdio.h>

int main() {
    
    float fah, cel;

    printf("Transform Fahrenheit in Celsius\n");
    printf("Fahrenheit: ");
    scanf("%f", &fah);

    cel = 5 * ((fah - 32) / 9);

    printf("Celsius: %f", cel);

    return 0;
}