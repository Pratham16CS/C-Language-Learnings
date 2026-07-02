#include<stdio.h>

void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

void selection_sort(int a[],int n){
    int index;
    for(int i=0;i<n-1;i++){
        index = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[index]){
                index = j;
            }
        }
        int temp = a[i];
        a[i] = a[index];
        a[index] = temp;
    }
    printf("Your sorted array: ");
    printarray(a,n);
}

int main(){
    int n;
    printf("Enter length of your array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter your array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    selection_sort(a,n);
    return 0;
}