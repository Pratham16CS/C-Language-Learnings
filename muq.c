#include<stdio.h>
struct employee{
    int ID;
    char name[20];
    int exp;
    int salary;
};
int main(){
    int n,i;
    printf("Enter total number of employees in the office: ");
    scanf("%d",&n);
    struct employee emp[n];
    for(i=0;i<n;i++){
        printf("Enter employee name: ");
        scanf("%s",emp[i].name);
        printf("Enter employee ID: ");
        scanf("%d",&emp[i].ID);
        printf("Enter salary: ");
        scanf("%d",&emp[i].salary);
        printf("Enter experience (in years): ");
        scanf("%d",&emp[i].exp);
        printf("\n\n");
    }
    printf("Details of employee having experience of 5 or more year and salary less than equal to 10,000: \n\n");
    for(i=0;i<n;i++){
        if(emp[i].salary<=10000 && emp[i].exp>=5){
            printf("*************************************\n\n");
            printf("Employee ID: %d\n",emp[i].ID);
            printf("Employee Name: %s\n",emp[i].name);
            printf("Employee experience: %d\n",emp[i].exp);
            printf("Employee Salary: %d\n",emp[i].salary);
            printf("\n************************************\n\n");
        }
    }
    return 0;

}