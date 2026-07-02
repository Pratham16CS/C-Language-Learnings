//Print prime numbers from 100 to 500.
#include<stdio.h>
int main(){
    int i,j,count;
    printf("Prime numbers from 100 to 500:\n");
    for(i=100;i<=500;i++){
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