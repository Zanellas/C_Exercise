#include <stdio.h>

int main() {

    float meters, centimeters;
    
    printf("Convert meters to centimeters\n");
    printf("Meters: ");
    scanf("%f", &meters);

    centimeters = meters * 100;

    printf("%.2f meters is %.2f centimeters", meters, centimeters);

    return 0;
}