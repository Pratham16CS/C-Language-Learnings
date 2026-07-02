#include<Stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[10];
    printf("Enter two strings:\n");
    gets(str1);
    gets(str2);
    printf("String1 = %s & String2 = %s\n",str1,str2);
    printf("Strings after comparing = %d\n",strcmp(str1,str2));
    printf("String1 = %s & String2 = %s ,after using lower case function.\n",strlwr(str1),strlwr(str2));
    strcpy(str1,str2);
    printf("After uding copy function, String1 = %s & String2 = %s\n",str1,str2);
    strcat(str1,str2);
    printf("After using concatination function, String1 = %s & String2 = %s\n",str1,str2);
    return 0;
}