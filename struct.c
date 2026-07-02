#include<stdio.h>
struct students{
    char Name[100];
    int roll;
    float cgpa;
};
int main(){
    struct students s1;
    strcpy(s1.Name,"Pratham");
    s1.roll = 40;
    s1.cgpa = 9.2;
    printf("%s \n%d \n%f \n",s1.Name,s1.roll,s1.cgpa);
    return 0;
}