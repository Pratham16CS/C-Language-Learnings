#include<stdio.h>
int main(){
    printf("enter numbers untill end appears: \n");
    do{
        int n;
        printf("number \n");
        scanf("%d",&n);
        if(n%2 != 0){
            break;
        }
    }
    while(1);
    printf("End");
    return 0;
}