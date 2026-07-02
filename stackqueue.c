// Program for implementing Queue using Stack
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

#define MAX 5

typedef struct{
    int data[MAX];
    int top;
}stack;

void initialize(stack *s){
    s->top = -1;
}

void insert(stack *s,int val){
    if(s->top==MAX-1){
        printf("Queue Overflow!!\n");
    }
    else{
        s->top += 1;
        s->data[s->top]=val;
        printf("%d is inserted successfully in queue\n",s->data[s->top]);
    }
}

void del(stack *s){
    if(s->top==-1){
        printf("Stack Underflow!!\n");
    }
    else{
        int j = 0;
        while(s->data[j]<0&&j<=s->top){
            j++;
        }
        if(j>s->top){
            printf("Queue Underflow!!\n");
        }
        else{
            int val;
            val = s->data[j];
            s->data[j]=-1;
            printf("%d deleted successfully!!\n",val);
        }
    }
}

void display(stack *s){
    if(s->top==-1){
        printf("Queue is empty!!");
    }
    else{
        int i;
        for(i=0;i<=s->top;i++){
            if(s->data[i]>=0){
                printf("%d\t",s->data[i]);
            }
            else if(i==s->top&&s->data[i]==-1){
                printf("Queue is empty!!\n");
            }
        }
        printf("\n");
    }
}

int main(){
    int ch;
    stack s;
    initialize(&s);
    while(1){
        printf("\t\tYour Choices:\n");
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        int num;
        switch(ch){
            case 1:
            printf("Enter value: ");
            scanf("%d",&num);
            insert(&s,num);
            break;
            case 2:
            del(&s);
            break;
            case 3:
            display(&s);
            break;
            case 4:
            printf("Thank You!!\n");
            exit(0);
            default:
            printf("Enter correct choice code!!\n");
        }
    }
    return 0;
}