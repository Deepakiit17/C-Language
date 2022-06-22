#include<stdio.h>
#include<string.h>

// user defind
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1 = {1664, 9.2, "Deepak"};
    printf("student name = %s\n", s1.name);

    struct student *ptr = &s1;
    printf("student name = %s\n", (*ptr).name);
    printf("student -> name = %s\n", ptr->name);

    return 0;
}