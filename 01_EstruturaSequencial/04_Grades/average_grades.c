#include <stdio.h>

int main() {

    int num_grades;
    float average = 0;

    printf("How many grades do you want to enter?\n");
    scanf("%d", &num_grades);

    int grades[num_grades];

    for (int i = 0; i < num_grades; i++) {
        printf("Note %d: ", i + 1);
        scanf("%d", &grades[i]);
        average += grades[i];
    }

    average /= num_grades;

    printf("Your average grade is: %.2f", average); 

    return 0;
}