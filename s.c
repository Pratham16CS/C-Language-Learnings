#include<stdio.h>
#include<strings.h>
struct Engineeringstudents {
    char name[100];
    int roll;
    float cpga;
}ES;//ES typedef for Engineering students
int main(){
    struct ES s1 = {"Pratham",16654,9.4};
    printf("%s\n%d\n%f\n",s1.name,s1.roll,s1.cgpa);
    return 0;
}