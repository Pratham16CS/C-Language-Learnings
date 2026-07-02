//program to calculate summation of series:- 1/1!+2/2!+3/3!......+n/n!
#include<stdio.h>
float fact(float n);
int main(){
    float n;
    printf("Enter size of series: ");
    scanf("%f",&n);
    float i;
    float sum = 0;
    for(i=0;i<n;i++){
        sum += (i+1)/fact(i+1);
    }
    printf("Summation of series: %f",sum);
    return 0;
}
float fact(float n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}