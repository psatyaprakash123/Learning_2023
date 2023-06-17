#include <stdio.h>

char calculateGrade(int score) {
    if (score >= 90 && score <= 100) {
        return 'A';
    } else if (score >= 75 && score <= 89) {
        return 'B';
    } else if (score >= 60 && score <= 74) {
        return 'C';
    } else if (score >= 50 && score <= 59) {
        return 'D';
    } else if (score >= 0 && score <= 49) {
        return 'F';
    } else {
        return 'X'; // Invalid grade
    }
}

int main() {
    int score;

    printf("Enter the score: ");
    scanf("%d", &score);

    char grade = calculateGrade(score);

    if (grade == 'X') {
        printf("Invalid score\n");
    } else {
        printf("Grade %c\n", grade);
    }

    return 0;
}

