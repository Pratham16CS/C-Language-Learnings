#include<stdio.h>
int main(){
    int a,b,num,sum,mult,div,sub;
    printf("Perform operations\n");
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Your choice code:\n1.Add\n2.Sub\n3.mult\n4.div\n");
    printf("Enter your choice code: ");
    scanf("%d",&num);
    switch(num){
        case 1: sum = a+b;
        printf("%d + %d = %d \n",a,b,sum);
        printf("Addition of numbers: %d\n",sum);
        break;
        case 2: sub = a-b;
        printf("%d - %d = %d \n",a,b,sub);
        printf("Substraction of numbers: %d\n",sub);
        break;
        case 3: mult = a*b;
        printf("%d * %d = %d \n",a,b,mult);
        printf("Multiplication of numbers: %d \n",mult);
        break;
        case 4: div = a/b;
        printf("%d / %d = %d \n",a,b,div);
        printf("Division of numbers: %d \n",div);
        break;
        default: printf("Enter a correct choice code.\n");
    }
    printf("Thank You!!");
    return 0;
}