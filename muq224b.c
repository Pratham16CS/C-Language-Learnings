// Write a program to get greatest of n numbers.
#include<stdio.h>
int main(){
    int n;
    printf("How many numbers you will enter?: ");
    scanf("%d",&n);
    int a[n],i,j,temp;
    printf("Enter numbers:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = a[i];
            }
        }
    }
    printf("Greatest of given numbers: %d",a[0]);
    return 0;
}