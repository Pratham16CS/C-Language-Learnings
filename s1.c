#include<stdio.h>
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main (){
    struct student ece[100];
    ece[0].roll = 69;
    ece[0].cgpa = 7.2;
    strcpy(ece[0].name , "Prashant");
    printf("name = %s\n",ece[0].name);
    printf("roll = %d\n",ece[0].roll);
    printf("cgpa = %f\n",ece[0].cgpa);
    return 0;
}