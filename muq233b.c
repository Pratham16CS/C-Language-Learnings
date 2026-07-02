//write a program to calculate value of f(x)
#include<Stdio.h>
int main(){
    int x,sum;
    printf("Enter a value of x: ");
    scanf("%d",&x);
    if(x>=0 && x<=10){
        sum = x*x + 2;
    }
    else if(x>10 && x<=20){
        sum = x*x + 2*x;
    }
    else if(x>20 && x<=30){
        sum = x*x*x + 2*x*x;
    }
    else{
        sum = 0;
    }
    printf("The value of f(x) for x = %d : %d",x,sum);
    return 0;
}