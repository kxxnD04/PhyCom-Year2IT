#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
    printf("%s %c %s (%d) ID: %s GPA %.2lf\n", prefix, first_c, s.surname, s.age, s.id, s.gpa);
}
int text_compare(char* word1, char* word2){
    int i = 0;
    while (word1[i] != '\0' && word2[i] != '\0')
    {
        if (word1[i] != word2[i]) {
            return word1[i] > word2[i] ? 1 : 0;
        }
        i++;
    }
    return word1[i] != '\0';
}
// void swap(struct student_info s1, struct student_info s2){
//     struct student_info temp = s1;
//     s1 = s2;
//     s2 = temp;
// }

void bubble_sort_student(struct student_info s[20], char* opt){
    int n = 20;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if (!strcmp(opt, "name") && text_compare(s[j].name, s[j+1].name)){
                struct student_info temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
            if (!strcmp(opt, "surname") && text_compare(s[j].surname, s[j+1].surname)){
                struct student_info temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
            if (!strcmp(opt, "id") && text_compare(s[j].id, s[j+1].id)){
                struct student_info temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}

int main(){
    struct student_info s[20];
    char option[8];
    for(int i = 0; i < 20; i++){
        scanf("%s %s %s %d %s %lf", s[i].name, s[i].surname, s[i].sex, &s[i].age, s[i].id, &s[i].gpa);
    }
    scanf("%s", option);
    for(int i = 0; option[i] != '\0'; i++){
        option[i] = tolower(option[i]);
    }
    bubble_sort_student(s, option);
    
    for(int i = 0; i < 20; i++){
        print_info(s[i]);
    }
    return 0;
}
