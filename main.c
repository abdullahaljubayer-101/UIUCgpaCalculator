#include <stdio.h>

int main(void)
{
    int numberOfCourses, i;
    double creditsCompleted, currentCGPA, sumOfWeighted = 0, sumOfCredit = 0;
    double CGPA, totalCGPA;

    printf("Credits Completed: ");
    scanf("%lf", &creditsCompleted);

    if (creditsCompleted != 0)
    {
        printf("Current CGPA: ");
        scanf("%lf", &currentCGPA);
    }

    printf("Number of Courses in the Current Trimester: ");
    scanf("%d", &numberOfCourses);

    double grade[numberOfCourses][2];

    for (i = 0; i < numberOfCourses; i++)
    {
        printf("%d Number Course Credits: ", i + 1);
        scanf("%lf", &grade[i][0]);

        printf("%d Number Course Grade: ", i + 1);
        scanf("%lf", &grade[i][1]);
    }

    for (i = 0; i < numberOfCourses; i++)
    {
        sumOfWeighted += grade[i][0] * grade[i][1];
        sumOfCredit += grade[i][0];
    }

    if (creditsCompleted != 0)
    {
        CGPA = sumOfWeighted / sumOfCredit;
        printf("CGPA of Current Trimester: %.2lf\n", CGPA);

        totalCGPA = ((creditsCompleted * currentCGPA) + sumOfWeighted) / (sumOfCredit + creditsCompleted);
        printf("Total CGPA: %.2lf\n", totalCGPA);
    }

    else
    {
        CGPA = sumOfWeighted / sumOfCredit;

        printf("CGPA of Current Trimester: %.2lf\n", CGPA);
        printf("Total CGPA: %.2lf\n", CGPA);
    }

    return 0;
}