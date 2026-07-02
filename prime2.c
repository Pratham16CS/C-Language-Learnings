#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("enter name ");
    scanf("%d",&a);
    if(a>0){
        printf("Natural number \n");
        if (a==1){
            printf("Nor Prime Neither Composite");
        }
        else if((a%2==0 && a!=2)||(a%3==0 && a!=3)||(a%5==0 && a!=5)||(a%7==0 && a!=7)||(a%11==0 && a!=11)||(a%13==0 && a!=13)||(a%17==0 && a!=17)||(a%19==0 && a!=19)){
            printf("Composite number \n");
            if(a%2==0){
                printf("Even number");
            }
            else{
                printf("Odd number");
            }
            }
        else {
            printf("Prime number \n");
            if(a%2==0){
                printf("Even Prime number");
            }
            else{
                printf("odd prime number");
            }
        }
    }
    else{
        printf("Not a Natural number");
    }
    return 0;
}