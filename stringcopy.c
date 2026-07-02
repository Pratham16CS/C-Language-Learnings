#include<stdio.h>
int main(){
    char string1[20],string2[20];
    int i=0,j=0;
    printf("Enter two strings:\n");
    gets(string1);
    gets(string2);
    printf("String1 = %s & String2 = %s\n",string1,string2);
    while(string2[i]!='\0'){
        string1[i]=string2[i];
        i++;
    }
    string1[i] = '\0';
    printf("String1 = %s & String2 = %s",string1,string2);
    return 0;
}