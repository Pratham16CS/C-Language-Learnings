#include<stdio.h>
int main(){
    int n,count = 0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            count++;
        }
    }
    if(count == 2){
        printf("Prime Number.");
    }
    else if(count == 1){
        printf("Neither prime nor composite.");
    }
    else{
        printf("composite number.");
    }
    return 0;
}