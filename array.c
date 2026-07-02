#include<stdio.h>
int main(){
    float amount[4];
    printf("Enter 4 prices: ");
    scanf("%f",&amount[0]);
    scanf("%f",&amount[1]);
    scanf("%f",&amount[2]);
    scanf("%f",&amount[3]);
    printf("Total = %f",(0.18*amount[0]+amount[0])+(0.18*amount[1]+amount[1])+(0.18*amount[2]+amount[2])+(0.18*amount[3]+amount[3]));
    return 0;
    }