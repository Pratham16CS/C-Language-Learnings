//Print prime numbers from 1 to 50.
#include<stdio.h>
int main(){
    int i,j,count;
    printf("Prime numbers from 1 to 50:\n");
    for(i=1;i<=50;i++){
        count = 0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            printf("%d ",i);
        }
    }
    return 0;
}