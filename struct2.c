#include<stdio.h>
struct maths{
    char name[100];
    int roll;
    int marks;
};
int main(){
    int n;
    int m;
    struct maths student[10];
    for(int i=0;i<=9;i++){
        printf("Student%d\n",i+1);
        printf("Enter Roll no: ");
        scanf("%d",&student[i].roll);
        printf("Enter name: ");
        scanf("%s",&student[i].name);
        printf("Enter marks: ");
        scanf("%d",&student[i].marks);
    }
    printf("1.Data of class \n2.Data of a student\n");
    printf("Enter your choice:");
    scanf("%d",&m);
    if (m == 1){
        printf ("Maths marksheet of class\n");
        for(int i=0;i<=9;i++){
            printf("Student Name: %s\n",student[i].name);
            printf("Student Roll no: %d\n",student[i].roll);
            printf("Maths Marks: %d\n",student[i].marks);
        }
    }
    else if(m == 2){
        printf("Enter Roll no: ");
        scanf("%d",&n);
        for(int i=0;i<=9;i++){
            if(n == i+1){
                printf("Student Name: %s\n",student[i].name);
                printf("Student Roll no: %d\n",student[i].roll);
                printf("Maths Marks: %d\n",student[i].marks);
            }
        }
    }
    else{
        printf("Make a correct choice");
    }
    return 0;
}