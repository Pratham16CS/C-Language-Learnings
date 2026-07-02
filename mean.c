#include<stdio.h>
int main(){
    int n;
    float a[50],sum = 0,mean,var,sum1 = 0;
    printf("Enter total number of elements: ");
    scanf("%d",&n);
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
    var = sum1/(n-1);
    printf("The MEAN of elements : %f\n",mean);
    printf("The VARIANCE of elements: %f",var);
    return 0;
}