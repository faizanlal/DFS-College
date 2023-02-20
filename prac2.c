#include <stdio.h>
struct student
{
    int en;
    char name[20];
    float m1, m2, m3;
} s[3];

void main()
{
    float avg;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Name:");
        scanf("%s", s[i].name);

        printf("Enter Enrollmenty Number:");
        scanf("%d", &s[i].en);

        printf("Enter Marks:");
        scanf("%f", &s[i].m1);

        printf("Enter Marks:");
        scanf("%f", &s[i].m2);

        printf("Enter Marks:");
        scanf("%f", &s[i].m3);

        avg = (s[i].m1 + s[i].m2 + s[i].m2) / 3;
        printf("Average of %s is %f\n", s[i].name, avg);
    }
}
