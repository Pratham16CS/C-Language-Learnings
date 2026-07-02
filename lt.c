// Online C compiler to run C program online
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int indexChar(char *s,char ch,int cnt){
    int i = 0,c = 0;
    while(c!=cnt){
        if(s[i]==ch){
            c++;
        }
        i++;
    }
    return i;
}
int lengthOfLongestSubstring(char* s) {
    int left = 0,right = 0;
    int visit[128] = {0};
    int n = strlen(s),count = 0,max = 0;
    while(right<n){
        if(visit[s[right]]>0&&indexChar(s,s[right],visit[s[right]])>left){
            left += indexChar(s,s[right],visit[s[right]]);
        }
        visit[s[right]]++;
        count = (right - left)+1;
        if(count>max){
            max = count;
        }
        right++;
    }
    return max;
}
int main(){
    char s[] = "tmmzuxp";
    int max = lengthOfLongestSubstring(s);
    printf("%d",max);
    return 0;
}