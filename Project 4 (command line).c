
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int m1, m2, m3, m4, m5, total;
    float average;
    char name[30];

    if (argc != 7)
    {
        printf("Usage: ./a.out NAME M1 M2 M3 M4 M5\n");
        return 1;
    }

    if (strlen(argv[1]) >= sizeof(name))
    {
        printf("Error: Name is too long.\n");
        return 1;
    }

    strcpy(name, argv[1]);

    m1 = atoi(argv[2]);
    m2 = atoi(argv[3]);
    m3 = atoi(argv[4]);
    m4 = atoi(argv[5]);
    m5 = atoi(argv[6]);

    if (m1 < 0 || m1 > 100 ||
        m2 < 0 || m2 > 100 ||
        m3 < 0 || m3 > 100 ||
        m4 < 0 || m4 > 100 ||
        m5 < 0 || m5 > 100)
    {
        printf("Error: Marks must be between 0 and 100.\n");
        return 1;
    }

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;

    printf("\n-----STUDENT REPORT-----\n");
    printf("Student Name : %s\n", name);
    printf("MARK 1       : %d\n", m1);
    printf("MARK 2       : %d\n", m2);
    printf("MARK 3       : %d\n", m3);
    printf("MARK 4       : %d\n", m4);
    printf("MARK 5       : %d\n", m5);
    printf("TOTAL        : %d\n", total);
    printf("AVERAGE      : %.2f\n", average);

    if (m1 < 35 || m2 < 35 || m3 < 35 ||
        m4 < 35 || m5 < 35)
    {
        printf("Result       : FAIL\n");
    }
    else
    {
        printf("Result       : PASS\n");

        if (average >= 90)
            printf("Grade        : A+\n");
        else if (average >= 80)
            printf("Grade        : A\n");
        else if (average >= 70)
            printf("Grade        : B\n");
        else if (average >= 60)
            printf("Grade        : C\n");
        else
            printf("Grade        : D\n");
    }

    return 0;
}
