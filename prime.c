#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter Number ");
    scanf("%d",&a);
    if(a>0){
        printf("natural number \n");
        if(a==1){
            printf("neither prime nor composite");
        }
        else if(a%2==0 && a!=2){
            printf("composite number");
        }
        else if(a%3==0 && a!=3){
            printf("composite number");
        }
        else if(a%5==0 && a!=5){
            printf("composite number");
        }
        else if(a%7==0 && a!=7){
            printf("composite number");
        }
        else{
            printf("prime number");
        }
    }
    else{
        printf("not a natural number");
    }
    return 0;
}