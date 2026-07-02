#include <stdio.h>
#include <stdlib.h>
struct SLL{
    int data;
    struct SLL *next;
};

struct SLL *insertFirst(struct SLL *h,int val){
    struct SLL *p;
    p = (struct SLL *)malloc(sizeof(struct SLL));
    if(p==NULL){
        printf("Not enough memory space!!\n");
    }
    else{
        p->data = val;
        p->next = h;
        h = p;
        return h;
    }
}
struct SLL *insertLast(struct SLL *h,int val){
    struct SLL *new_node,*ptr;
    new_node = (struct SLL*)malloc(sizeof(struct SLL));
    if(new_node == NULL){
        printf("Not enough memory space!!\n");
    }
    else{
        new_node->data = val;
        new_node->next = NULL;
        if(h==NULL){
            h = new_node;
        }
        else{
            ptr = h;
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = new_node;
        }
        return h;
    }
}
struct SLL *delFirst(struct SLL *h){
    if(h==NULL){
        printf("List is empty!!\n");
    }
    else{
        struct SLL *ptr;
        ptr = h;
        h = h->next;
        free(ptr);
        return h;
    }
}
struct SLL *delLast(struct SLL *h){
    if(h == NULL){
        printf("List is empty!!\n");
    }
    else{
        struct SLL *ptr,*preptr;
        if(h->next == NULL){
            h = NULL;
        }
        else{
            ptr = h;
            while(ptr->next != NULL){
                preptr = ptr;
                ptr = ptr->next;
            }
            preptr->next = NULL;
            free(ptr);
        }
        return h;
    }
}
void display(struct SLL *h){
    if(h == NULL){
        printf("List is empty!!\n");
    }
    else{
        struct SLL *ptr;
        ptr = h;
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr = ptr->next;
        }
    }
}
int main(){
    int val;
    struct SLL *head;
    head = NULL;
    while(1){
        printf("\tYour choices:\n");
        printf("1.Insert At Start\n2.Insert At Last\n3.Delete At Start\n4.Delete At Last\n5.Display\n6.Exit\n");
        int ch;
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("Enter element: ");
            scanf("%d",&val);
            head = insertFirst(head,val);
            break;
            case 2:
            printf("Enter element: ");
            scanf("%d",&val);
            head = insertLast(head,val);
            break;
            case 3:
            head = delFirst(head);
            break;
            case 4:
            head = delLast(head);
            break;
            case 5:
            display(head);
            break;
            case 6:
            printf("Thank You!!\n");
            exit(0);
            default:
            printf("Enter correct choice code!!\n");
        }
    }
    return 0;
}