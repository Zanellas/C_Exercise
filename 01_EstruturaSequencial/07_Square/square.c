#include <stdio.h>

int main() {

    float side, area, double_area;

    printf("Enter the value of the side of the square: ");
    scanf("%f", &side);

    area = side * side;
    double_area = 2 * area;

    printf("The area of the square is: %.2f\n", area);
    printf("The doble of the area of the square is: %.2f\n", double_area);

    return 0;
}