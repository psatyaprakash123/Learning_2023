#include <stdio.h>

char calculateGrade(int score) {
    char grade;

    switch (score / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
        case 7:
            grade = 'B';
            break;
        case 6:
            grade = 'C';
            break;
        case 5:
            grade = 'D';
            break;
        case 4:
        case 3:
            grade = 'E';
            break;
        case 2:
        case 1:
        case 0:
            grade = 'F';
            break;
        default:
            grade = '\0'; // Invalid grade
            break;
    }

    return grade;
}

int main() {
    int score;
    char grade;

    printf("Enter the score: ");
    scanf("%d", &score);

    grade = calculateGrade(score);

    if (grade != '\0') {
        printf("The grade is: %c\n", grade);
    } else {
        printf("Invalid score.\n");
    }

    return 0;
}

