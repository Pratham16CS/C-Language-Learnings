#include<stdio.h>
#include<strings.h>
struct students{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct students s1;
    s1.roll = 1652;
    s1.cgpa = 8.9;
    printf("Roll no: %d\n",s1.roll);
    printf("cgpa: %f\n",s1.cgpa);
    s1.name;
    strcpy(s1.name,"Pratham");
    printf("Name: %s\n",s1.name);
    return 0;
}