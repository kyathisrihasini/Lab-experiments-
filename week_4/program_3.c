#include <stdio.h>

void main()
{
    int s1, s2, s3, s4, s5, total;
    float average;

    printf("enter five subject marks");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    total = s1 + s2 + s3 + s4 + s5;
    average = total / 5;
    printf("\ntotal Marks = %d", total);
    printf("\nAverage Marks = %.2f\n", average);
}
