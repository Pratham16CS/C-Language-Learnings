#include<stdio.h>
int main(){
    int n;
    printf("Enter total number of elements: ");
    scanf("%d",&n);
    float a[n],sum = 0,mean,var,sum1 = 0;
    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    for(int i=0;i<n;i++){
        sum = sum + a[i];
    }
    mean =  sum/n;
    for(int i=0;i<n;i++){
        sum1 = sum1 + (a[i]-mean)*(a[i]-mean);
    }
    var = sum1/n;
    printf("The MEAN of elements : %f\n",mean);
    printf("The VARIANCE of elements: %f",var);
    return 0;
}