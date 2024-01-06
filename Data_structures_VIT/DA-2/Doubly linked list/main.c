#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *prev, *next;
};
struct node* start = NULL;

void display(){
	if (start == NULL) {
		printf("\nList is empty\n");
		return;
	}
	struct node* temp;
	temp = start;
	while (temp != NULL) {
		printf("Data = %d\n", temp->data);
		temp = temp->next;
	}
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

// Function to count
void count(){
    int count = 0;
    if (start == NULL) {
		printf("\nList is empty\n");
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

// Function to insert at the front
void insertAtFront(){
	int data;
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	temp->data = data;
	temp->prev = NULL;
	temp->next = start;
	start = temp;
}

// Function to insert at the end
void insertAtEnd(){
	int data;
	struct node *temp, *trav;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->next = NULL;
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	temp->data = data;
	temp->next = NULL;
	trav = start;

	if (start == NULL) {
		start = temp;
	}
	else {
		while (trav->next != NULL)
			trav = trav->next;
		temp->prev = trav;
		trav->next = temp;
	}
}

// Function to insert at any position
void insertAtPosition(){
	int data, pos, i = 1;
	struct node *temp, *newNode;
	newNode = malloc(sizeof(struct node));
	newNode->next = NULL;
	newNode->prev = NULL;

	printf("\nEnter position : ");
	scanf("%d", &pos);

	if (start == NULL) {
		start = newNode;
		newNode->prev = NULL;
		newNode->next = NULL;
	}

	else if (pos == 1) {
	insertAtFront();
	}
	else {
	printf("\nEnter number to be inserted: ");
	scanf("%d", &data);
	newNode->data = data;
	temp = start;
		while (i < pos - 1) {
			temp = temp->next;
			i++;
		}
		newNode->next = temp->next;
		newNode->prev = temp;
		temp->next = newNode;
		temp->next->prev = newNode;
	}
}

// Function to delete from the front
void deleteFirst(){
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	else {
		temp = start;
		start = start->next;
		if (start != NULL)
			start->prev = NULL;
		free(temp);
	}
}

// Function to delete from the end
void deleteEnd(){
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	temp = start;
	while (temp->next != NULL)
		temp = temp->next;
	if (start->next == NULL)
		start = NULL;
	else {
		temp->prev->next = NULL;
		free(temp);
	}
}

// Function to delete from any position
void deletePosition(){
	int pos, i = 1;
	struct node *temp, *position;
	temp = start;
	if (start == NULL)
		printf("\nList is empty\n");
	else {
		printf("\nEnter position : ");
		scanf("%d", &pos);
		if (pos == 1) {
			deleteFirst();
			if (start != NULL) {
				start->prev = NULL;
			}
			free(position);
			return;
		}
		while (i < pos - 1) {
			temp = temp->next;
			i++;
		}
		position = temp->next;
		if (position->next != NULL)
			position->next->prev = temp;
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
	else{
		while (start != NULL) {
			t2 = start->next;
			start->next = t1;
			t1 = start;
			start = t2;
		}
		start = t1;
		temp = start;
		printf("Reversed linked list is : ");
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
		printf("\t9 To display total count\n");
		printf("\t10 To display position of element\n");
		printf("\t11 To exit\n");
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
			count();
			continue;
		case 10:
			search();
			continue;
		case 11:
			exit(1);
			break;
		default:
			printf("Incorrect Choice\n");
		}
	}
	return 0;
}
