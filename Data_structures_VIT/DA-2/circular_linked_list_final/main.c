#include <stdio.h>
#include <stdlib.h>
 
struct node{
    int data;
    struct node *next;
};
 
struct node *head;
 
struct node *create(int data){
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){
        printf("\nMemory can't be allocated.\n");
        return NULL;
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
 
// function to insert a new node at the beginning of the list
void insert_at_begin(int data){
   struct node *new_node = create(data);
   if (new_node != NULL){
       struct node *last = head;
       if (head == NULL){
           head = new_node;
           new_node->next = head;
           return;
       }
       while (last->next != head){
           last = last->next;
       }
       last->next = new_node;
       new_node->next = head;
       head = new_node;
   }
}
 
// function to insert a new node at the end of the list
void insert_at_end(int data){
    struct node *new_node = create(data);
    if (new_node != NULL){
        if (head == NULL){
            head = new_node;
            new_node->next = head;
            return;
        }
        struct node *last = head;
        while (last->next != head){
            last = last->next;
        }
        last->next = new_node;
        new_node->next = head;
    }
}
 
// function to insert a new node at the given position
void insert_at_position(int position, int data){
    if (position <= 0){
        printf("\nInvalid Position\n");
    }
    else if (head == NULL && position > 1){
        printf("\nInvalid Position\n");
    }
    else if (head != NULL && position > size_of_list()){
        printf("\nInvalid Position\n");
    }
    else if (position == 1){
        insert_at_begin(data);
    }
    else{
        struct node *new_node = create(data);
        if (new_node != NULL){
            struct node *temp = head, *prev = NULL;
            int i = 1; 
            while (++i <= position){
                prev = temp;
                temp = temp->next;
            }
            prev->next = new_node;
            new_node->next = temp;
        }
    }
}
 
// function to delete a node from the beginning of the list
void delete_at_begin(){
    if (head == NULL){
        printf("\n List is Empty! \n");
        return;
    }
    struct node *last = head;
    struct node *temp = head;
 
    if (last->next == head){
        free(last);
        head = NULL;
        return;
    }
    while (last->next != head){
        last = last->next;
    }
 
    head = head->next;
    last->next = head;
 
    free(temp);
    temp = NULL;
}
 
// function to delete a node from the end of the list
void delete_at_end(){
    if (head == NULL){
        printf("\n List is Empty! \n");
        return;
    }
    struct node *prev = head;
    struct node *temp = head->next;
    if (prev->next == head){
        free(prev);
        head = NULL;
        return;
    }
 
    while (temp->next != head){
        prev = temp;
        temp = temp->next;
    }
    prev->next = head;
    free(temp);
    temp = NULL;
}
 
// function to delete a node from the given position
void delete_at_position(int position)
{
    if (position <= 0){
        printf("\n Invalid Position \n");
    }
    else if (position > size_of_list()){
        printf("\n Invalid position \n");
    }
    else if (position == 1){
        delete_at_begin();
    }
    else if (position == size_of_list()){
        delete_at_end();
    }
    else{
        struct node *temp = head;
        struct node *prev = NULL;
        int i = 1;
        while (i < position){
            prev = temp;
            temp = temp->next;
            i += 1;
        }
        prev->next = temp->next;
        free(temp);
        temp = NULL;
    }
}
 
// print the node values
void print_list(){
    struct node *temp = head;
    if (head == NULL){
        printf("\n List is Empty! \n");
        return;
    }
    printf("\n");
    do{
        printf("%d ", temp->data);
        temp = temp->next;
    }while (temp != head);
    printf("\n");
}

// function to calculate the size of the list
int size_of_list(){
    if (head == NULL){
        return 0;
    }
    struct node *temp = head;
    int count = 1;
    while (temp->next != head){
        count += 1;
        temp = temp->next;
    }
    return count;
}
 
int getData(){
    int data;
    printf("\n\nEnter Data: ");
    scanf("%d", &data);
    return data;
}

int getPosition(){
    int pos;
    printf("\n\nEnter Position: ");
    scanf("%d", &pos); 
    return pos;
}

int main(){
    int user_choice;
    int data, position;
 
    while(1)
    { 
        printf("\n1. Insert a node at beginning");
        printf("\n2. Insert a node at end");
        printf("\n3. Delete a node from beginning");
        printf("\n4. Delete a node from end");
        printf("\n5. Print list from beginning");
        printf("\n6. Exit"); 
        printf("\nEnter your choice: ");
        scanf("%d", &user_choice);
        switch(user_choice)
        {
            case 1:
                printf("\nInserting a node at beginning");
                data = getData();
                insert_at_begin(data);
                continue;
 
            case 2:
                printf("\nInserting a node at end");
                data = getData();
                insert_at_end(data);
                continue;
 
            case 3: 
                printf("\nDeleting a node from beginning\n");
                delete_at_begin();
                continue;
 
            case 4: 
                printf("\nDeleting a node from end\n");
                delete_at_end();
                continue;
 
            case 5: 
                printf("\nPrinting the list from beginning\n\n");
                print_list();
                continue;
 
            case 6:
                printf("\nProgram was terminated\n\n");
                exit(1);
 
            default:
                printf("\n\t Invalid Choice\n");
                continue;
        }
    }
    return 0;
}

