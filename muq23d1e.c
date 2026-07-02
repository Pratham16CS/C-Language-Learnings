#include<stdio.h>
int main(){
    int n,i,count = 0;
    printf("Enter a natural number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count == 2){
        printf("Prime number.");
    }
    else if(count==1){
        printf("Neither prime nor composite.");
    }
    else{
        printf("Composite number.");
    }
    return 0;
}