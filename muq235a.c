//write a program using function to check if the entered number is a prime number or not.
#include<stdio.h>
int prime(int n);
int main(){
    int n;
    printf("Enter a natural number: ");
    scanf("%d",&n);
    if(n == 1){
        printf("Neither prime nor composite.");
    }
    else if(n <=0){
        printf("Not a natural number.");
    }
    else{
        if(prime(n)){
            printf("Prime number.");
        }
        else{
            printf("Composite number.");
        }
    }
    return 0;
}
int prime(int n){
    int i,count = 0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            count = count+1;
        }
    }
    if(count==2){
        return 1;
    }
    else{
        return 0;
    }
}