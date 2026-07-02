//A program to convert UPPER CASE STRING To lower case string.
#include<Stdio.h>
int main(){
    char name[10];
    printf("Enter a string in uppercase: ");
    gets(name);
    printf("String in uppercase = %s\n",name);
    int i=0,j,count=0;
    while(name[i]!='\0'){
        count = count + 1;
        i++;
    }
    for(j=0;j<count;j++){
        name[j]=name[j]+32;
    }
    printf("String in lower case = ");
    for(j=0;j<count;j++){
        printf("%c",name[j]);
    }
    return 0;
}
