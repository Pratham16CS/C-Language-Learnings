#include<stdio.h>
#include<stdlib.h>

int search(int key,int frame[],int n){
    for(int i=0;i<n;i++){
        if(frame[i]==key){
            return i;
        }
    }
    return -1;
}

void FIFO(int pages[],int n,int capacity){
    int frame[capacity],front = 0,count = 0,faults = 0;
    printf("\nFIFO Page replacement:\n");
    for(int i=0;i<n;i++){
        if(search(pages[i],frame,count)==-1){
            if(count<capacity){
                frame[count++] = pages[i];
            }
            else{
                frame[front] = pages[i];
                front = (front+1)%capacity;
            }
            faults++;
        }
        printf("Page %d -> [ ",pages[i]);
        for(int j=0;j<count;j++){
            printf("%d ",frame[j]);
        }
        printf("]\n");
    }
    printf("Total Page Faults (FIFO): %d\n",faults);
}

void LRU(int pages[],int n,int capacity){
    int frame[capacity],times[capacity];
    int count = 0, faults = 0,t=0;
    printf("\nLRU Page Replacement:\n");
    for(int i=0;i<n;i++){
        int index = search(pages[i],frame,count); 
        if(index==-1){
            if(count<capacity){
                frame[count] = pages[i];
                times[count] = t++;
                count++;
            }
            else{
                int lru =0;
                for(int j=1;j<capacity;j++){
                    if(times[j]<times[lru]){
                        lru = j;
                    }
                }
                frame[lru] = pages[i];
                times[lru] = t++;
            }
            faults++;
        }
        else{
            times[index] = t++;
        }
        printf("Page %d ->[ ",pages[i]);
        for(int j=0;j<count;j++){
            printf("%d ",frame[j]);
        }
        printf("]\n");
    }
    printf("Total Page Faults (LRU): %d\n",faults);
}

int main(){
    int n,capacity,choice;
    printf("Enter the of pages: ");
    scanf("%d",&n);
    int pages[n];
    printf("Enter page reference string:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&pages[i]);
    }
    printf("Enter the size of a frame: ");
    scanf("%d",&capacity);
    printf("\nChoose the page replacement algorithms:\n1.FIFO\n2.LRU\nEnter your choice: ");
    scanf("%d",&choice);
    if(choice==1){
        FIFO(pages,n,capacity);
    }
    else if(choice==2){
        LRU(pages,n,capacity);
    }
    else{
        printf("Invalid choice!\n");
    }
    return 0;
}