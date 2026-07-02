#include<stdio.h>
#include<string.h>
int main(){
    char word[20];
    int i,j,p;
    printf("Enter a word: ");
    gets(word);
    p = strlen(word);
    printf("Pattern for your word:\n");
    for(i=0;i<p;i++){
        for(j=0;j<=i;j++){
            printf("%c",word[j]);
        }
        printf("\n");
    }
    return 0;
}