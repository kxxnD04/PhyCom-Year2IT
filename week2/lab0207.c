#include <stdio.h>
int main()
{
    char name[31];
    char lastName[31];
    int id, day, month, year;
    float gpa;
    scanf("%s\n%s\n%d\n%d/%d/%d\n%f", name, lastName, &id, &day, &month, &year, &gpa);
    printf("Fullname: %s %s\nID: %08d\nDOB: %02d-%02d-%04d\nGPA: %.2f", name, lastName, id, day, month, year, gpa);
    return 0;
}
