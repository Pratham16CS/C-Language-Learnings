#include<stdio.h>
#include<string.h>
struct students{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct students s1;
    strcpy(s1.name,"Pratham");
    s1.roll = 89;
    s1.cgpa = 8.5;
    struct students *a = &s1;
    printf("%s\n%d\n%f\n",(*a).name,(*a).roll,(*a).cgpa);
    return 0;
}