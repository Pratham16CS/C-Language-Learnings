#include<stdio.h>

void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

void insertion_sort(int a[],int n){
    int key;
    for(int j=1;j<n;j++){
        key = a[j];
        int i = j-1;
        while(i>=0 && a[i]>key){
            a[i+1] = a[i];
            printf("IN:%d %d i=%d\n",a[i+1],a[i],i);
            i--;
        }
        a[i+1] = key;
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
    insertion_sort(a,n);
    return 0;
}