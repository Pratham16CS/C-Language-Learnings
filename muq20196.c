//program to find the resultant of series x-x/2!+x/3!-x/4!......x/n!
#include<stdio.h>
float factorial(int n);
int main(){
    int n;
    float x;
    printf("Enter number: ");
    scanf("%f",&x);
    printf("Enter size of series: ");
    scanf("%d",&n);
    int i;
    float sum = 0;
    for(i=0;i<n;i++){
        if(i==0 || i%2==0){
            sum += x/factorial(i+1);
        }
        else{
            sum -= x/factorial(i+1);
        }
    }
    printf("Sum of your series: %f",sum);
    return 0;
}
float factorial(int n){
    float fact = 1;
    while(n!=0){
        fact *= n;
        n--;
    }
    return fact;
}
