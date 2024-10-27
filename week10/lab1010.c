#include <stdio.h>
#include <string.h>

struct student_info
{
    char name[61];
    char surname[61];
    char sex[6];
    int age;
    char id[13];
    double gpa;
};
void print_info(struct student_info s){
    char prefix[5] = "";
    if(!strcmp(s.sex, "Male")){
        strcpy(prefix, "Mr");
    }else{
        strcpy(prefix, "Miss");
    }
    char first_c = s.name[0];
    printf("%s %c %s (%d) ID: %s GPA %.2lf", prefix, first_c, s.surname, s.age, s.id, s.gpa);
}

int main(){
    struct student_info s1;

    scanf("%s %s %s %d %s %lf", s1.name, s1.surname, s1.sex, &s1.age, s1.id, &s1.gpa);
    print_info(s1);
    return 0;
}
