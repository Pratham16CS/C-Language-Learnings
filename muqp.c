#include<stdio.h>
int main(){
    char word[] = "STUDY";
    int i,j;
    printf("Your pattern:\n");
    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            printf("%c",word[j]);
        }
        printf("\n");
    }
    return 0;
}