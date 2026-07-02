//converting UPPER CASE STRINGS To lower case strings and vice-versa.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int count = 0,num=0,p=0,i;
    char string1[20];
    printf("Enter a string: ");
    gets(string1);
    while(string1[p]!='\0'){
        p++;
    }
    for(i=0;i<p;i++){
        if(string1[i]>=65 && string1[i]<=90){
            string1[i] = string1[i] + 32;
            count = count + 1;
        }
        else if(string1[i]>=97 && string1[i]<=122){
            string1[i] = string1[i] - 32;
            num = num + 1;
        }
        else{
            printf("Don't enter any special characters.\n");
            exit(0);
        }
    }
    if(count == p){
        printf("Your string is written using upper case letters.\n");
        printf("Your string in lower case: ");
        for(i=0;i<p;i++){
            printf("%c",string1[i]);
        }
    }
    else if(num == p){
        printf("Your string is written using lower case letters.\n");
        printf("Your string in upper case: ");
        for(i=0;i<p;i++){
            printf("%c",string1[i]);
        }
    }
    else{
        printf("Your string contains both upper and lower case letters.\n");
        printf("Crazy conversion of your string: ");
        for(i=0;i<p;i++){
            printf("%c",string1[i]);
        }
    }
    return 0;
}