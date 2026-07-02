#include<stdio.h>
int main(){
    int n,count = 1;
    float fact = 1,sum = 0;
    printf("Series: [(1/1!)+(2/2!)+(3/3!)+......+(n/n!)] \n");
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        fact = fact*count;
        sum = sum + (count/fact);
        count++;
    }
    printf("Sum of series: %f",sum);
    return 0;
}