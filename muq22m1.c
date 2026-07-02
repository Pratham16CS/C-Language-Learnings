// Write a program to accept elements of 1-D array from user and sort and display in ascending order.
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n],temp;
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Elements in ascending order:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}