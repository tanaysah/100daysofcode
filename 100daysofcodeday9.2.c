//day 9.2- 100 days of code
//wap to to assign grades based on a percentage

//tanaysah

#include <stdio.h>

int main() {
    float science, math, english, hindi, computer;
    float total, percentage;

    printf("Marks of Science: ");
    scanf("%f", &science);
    if (science < 0 || science > 100) {
        printf("Enter marks between 0 and 100\n");
        return 0;
    }

    printf("Marks of Math: ");
    scanf("%f", &math);
    if (math < 0 || math > 100) {
        printf("Enter marks between 0 and 100\n");
        return 0;
    }

    printf("Marks of English: ");
    scanf("%f", &english);
    if (english < 0 || english > 100) {
        printf("Enter marks between 0 and 100\n");
        return 0;
    }

    printf("Marks of Hindi: ");
    scanf("%f", &hindi);
    if (hindi < 0 || hindi > 100) {
        printf("Enter marks between 0 and 100\n");
        return 0;
    }

    printf("Marks of Computer Science: ");
    scanf("%f", &computer);
    if (computer < 0 || computer > 100) {
        printf("Enter marks between 0 and 100\n");
        return 0;
    }

    total = science + math + english + hindi + computer;
    percentage = (total / 500) * 100;

    printf("Percentage is %.2f%%\n", percentage);

    if (percentage >= 80) {
        printf("First Division\n");
    }
    else if (percentage >= 60 && percentage < 80) {
        printf("Second Division\n");
    }
    else if (percentage >= 40 && percentage < 60) {
        printf("Third Division\n");
    }
    else {
        printf("Fail\n");
    }

    return 0;
}

