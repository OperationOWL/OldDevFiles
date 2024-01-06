#include <stdio.h>
#include<stdlib.h>
#define MAX 100
 
void display();
void insert();
void delete();
int arr[MAX];
int rear = - 1;
int front = - 1;

int main(){
    int ch;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display entire queue\n");
        printf("4.Exit \n");
        printf("Enter from the following options : ");
        scanf("%d", &ch);
        switch (ch){
            case 1:
                insert();
                continue;
            case 2:
                delete();
                continue;
            case 3:
                display();
                continue;
            case 4:
                exit(1);
                break;
            default:
                printf("Please enter correct option\n");
        } 
    } 
    return 0;
}
 
void insert(){
    int x;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else{
        if (front == - 1){
            front = 0;
        }
        printf("Insert the element in queue : ");
        scanf("%d", &x);
        rear = rear + 1;
        arr[rear] = x;
    }
} 
 void delete(){
    if (front == - 1 || front > rear){
        printf("Queue Underflow \n");
        return ;
    }
    else{
        printf("Element deleted from queue is : %d\n", arr[front]);
        front = front + 1;
    }
} 
 
void display(){
    if (front == - 1)
        printf("Queue is empty \n");
    else{
        printf("The Queue is : \n");
        for (int i = front; i <= rear; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
}