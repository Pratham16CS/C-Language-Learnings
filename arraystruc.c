#include<stdio.h>
#include<strings.h>
struct students{
    char name[100];
    int roll;
    float cgpa;
};
int main(){
    struct students AI[60];
    strcpy(AI[0].name,"Pratham");
    AI[0].roll = 16445;
    AI[0].cgpa = 9.1;
    printf("%s \n%d \n%f\n",AI[0].name,AI[0].roll,AI[0].cgpa);
    strcpy(AI[1].name,"Prashant");
    AI[1].roll = 16446;
    AI[1].cgpa = 8.20;
    printf("%s \n%d \n%f\n",AI[1].name,AI[1].roll,AI[1].cgpa);
    strcpy(AI[2].name,"Pratik");
    AI[2].roll = 16447;
    AI[2].cgpa = 9.0;
    printf("%s \n%d \n%f\n",AI[2].name,AI[2].roll,AI[2].cgpa);
    return 0;
}