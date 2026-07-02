//A Program to convert lower case string tO UPPER CASE STRING.
#include<stdio.h>
int main(){
    char name[20];
    printf("Enter a string in lower case: ");
    gets(name);
    printf("String in lower case = %s\n",name);
    int i,count = 0;
    while(name[count]!='\0'){
        count = count + 1;
    }
    for(i=0;i<count;i++){
        name[i] = name[i] - 32;
    }
    printf("String in upper case = ");
    for(i=0;i<count;i++){
        printf("%c",name[i]);
    }
    return 0;
}