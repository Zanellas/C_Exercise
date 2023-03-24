#include <stdio.h>

int main() {

    float value_hour, quant_hour, salary;

    printf("What is the value of your working hour? ");
    scanf("%f", &value_hour);

    printf("How many hours did you work this month? ");
    scanf("%f", &quant_hour);

    salary = value_hour * quant_hour;

    printf("Your salary this month will be: R$ %.2f", salary);

    return 0;
}