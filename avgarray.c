#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    float a[n];
    float sum = 0.0;
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
        sum += a[i];
    }
    printf("Average of elements is: %f",sum/n);
    return 0;
}