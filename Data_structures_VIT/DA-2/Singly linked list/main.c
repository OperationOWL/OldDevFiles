#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};
struct node* start = NULL;

//create list
void createList(){
	if (start == NULL){
		int n;
		printf("\nEnter the number of nodes: ");
		scanf("%d", &n);
		if (n != 0) {
			int data;
			struct node* newNode;
			struct node* temp;
			newNode = malloc(sizeof(struct node));
			start = newNode;
			temp = start;
			printf("\nEnter number to be inserted : ");
			scanf("%d", &data);
			start->data = data;
			for (int i = 2; i <= n; i++) {
				newNode = malloc(sizeof(struct node));
				temp->next = newNode;
				printf("\nEnter number to be inserted : ");
				scanf("%d", &data);
				newNode->data = data;
				temp = temp->next;
			}
		}
		printf("\nThe list is created\n");
	}
	else{
		printf("\nThe list is already created\n");
    }
}

// Function to display
void display(){
	struct node* temp;
	if(start == NULL){
		printf("\nList is empty\n");
    }
	else{
		temp = start;
		while (temp != NULL) {
			printf("Data = %d\n", temp->data);
			temp = temp->next;
		}
	}
}

// Function to count odd numbers
void countOdd(){
    int count = 0;
    if (start == NULL) {
		printf("\n0\n");
		return;
	}
	struct node* temp;
	temp = start;
	while (temp != NULL) {
        if(temp->data%2 == 1){
            count++;
        }
		temp = temp->next;
	}
    printf("odd numbers count is: %d", count);
}

// Function to count even numbers
void countEven(){
    int count = 0;
    if (start == NULL) {
		printf("\n0\n");
		return;
	}
	struct node* temp;
	temp = start;
	while (temp != NULL) {
        if(temp->data%2 == 0 ){
            count++;
        }
		temp = temp->next;
	}
    printf("Count is: %d", count);
}

// Function to count
void count(){
    int count = 0;
    if (start == NULL) {
		printf("\n0\n");
		return;
	}
	struct node* temp;
	temp = start;
	while (temp != NULL) {
        count++;
		temp = temp->next;
	}
    printf("Count is: %d", count);
}

// Function to search element
void search(){
    int element;
    int pos = 0;
    printf("\nEnter element : ");
	scanf("%d", &element);
	if (start == NULL) {
		printf("\nList is empty\n");
		return;
	}
	struct node* temp;
	temp = start;
	while (temp != NULL) {
        if(temp->data == element){
            printf("position is: %d", pos);
        }
        pos++;
        temp = temp->next;
	}
}

// Function to insert at the front
void insertAtFront(){
	int data;
	struct node* temp;
	temp = malloc(sizeof(struct node));
	printf("\nEnter number to be inserted : ");
	scanf("%d", &data);
	temp->data = data;
	temp->next = start;
	start = temp;
}

// Function to insert at the end
void insertAtEnd(){
	int data;
	struct node *temp, *head;
	temp = malloc(sizeof(struct node));
	printf("\nEnter number to be inserted : ");
	scanf("%d", &data);
	temp->next = 0;
	temp->data = data;
	head = start;
	while (head->next != NULL) {
		head = head->next;
	}
	head->next = temp;
}

// Function to insert at any position
void insertAtPosition(){
	struct node *temp, *newNode;
	int pos, data, i = 1;
	newNode = malloc(sizeof(struct node));
	printf("\nEnter position and data :");
	scanf("%d %d", &pos, &data);
	temp = start;
	newNode->data = data;
	newNode->next = 0;
	while (i < pos - 1) {
		temp = temp->next;
		i++;
	}
	newNode->next = temp->next;
	temp->next = newNode;
}

// Function to delete from the front
void deleteFirst(){
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	else {
		temp = start;
		start = start->next;
		free(temp);
	}
}

// Function to delete from the end
void deleteEnd(){
	struct node *temp, *prevnode;
	if (start == NULL)
		printf("\nList is Empty\n");
	else {
		temp = start;
		while (temp->next != 0) {
			prevnode = temp;
			temp = temp->next;
		}
		free(temp);
		prevnode->next = 0;
	}
}

// Function to delete from any position
void deletePosition(){
	struct node *temp, *position;
	int i = 1, pos;
	if (start == NULL)
		printf("\nList is empty\n");
	else {
		printf("\nEnter index : ");
		scanf("%d", &pos);
		position = malloc(sizeof(struct node));
		temp = start;
		while (i < pos - 1) {
			temp = temp->next;
			i++;
		}
		position = temp->next;
		temp->next = position->next;
		free(position);
	}
}

// Function to reverse the list
void reverseLL(){
	struct node *t1, *t2, *temp;
	t1 = t2 = NULL;
	if (start == NULL)
		printf("List is empty\n");
	else {
		while (start != NULL) {
			t2 = start->next;
			start->next = t1;
			t1 = start;
			start = t2;
		}
		start = t1;
		temp = start;
		printf("Reversed nexted list is : ");
		while (temp != NULL) {
			printf("%d ", temp->data);
			temp = temp->next;
		}
	}
}

int main()
{
	int choice;
	while (1) {
		printf("\n\t1 To see list\n");
		printf("\t2 For insertion at starting\n");
		printf("\t3 For insertion at end\n");
		printf("\t4 For insertion at any position\n");
		printf("\t5 For deletion of first element\n");
		printf("\t6 For deletion of last element\n");
		printf("\t7 For deletion of element at any position\n");
		printf("\t8 To reverse the nexted list\n");
		printf("\t9 To display odd number count\n");
		printf("\t10 To display even number count\n");
		printf("\t11 To display total count\n");
		printf("\t12 To display position of element\n");
		printf("\t13 To exit\n");
		printf("\nEnter Choice :\n");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			display();
			continue;
		case 2:
			insertAtFront();
			continue;
		case 3:
			insertAtEnd();
			continue;
		case 4:
			insertAtPosition();
			continue;
		case 5:
			deleteFirst();
			continue;
		case 6:
			deleteEnd();
			continue;
		case 7:
			deletePosition();
			continue;
		case 8:
			reverseLL();
			continue;
		case 9:
			countOdd();
			continue;
		case 10:
			countEven();
			continue;
		case 11:
			count();
			continue;
		case 12:
			search();
			continue;
		case 13:
			exit(1);
			break;
		default:
			printf("Incorrect Choice\n");
            continue;
		}
	}
	return 0;
}
