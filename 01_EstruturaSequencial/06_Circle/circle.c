#include <stdio.h>

int main() {

    float area, radius;

    printf("Calculate the area of ​​the circle, what is the radius? ");
    scanf("%f", &radius);

    area = 3.14159 * (radius * radius);

    printf("The area of the circle is: %.2f", area);
   
    return 0;
}