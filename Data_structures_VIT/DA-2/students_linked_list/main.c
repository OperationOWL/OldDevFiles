#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int rno,age;
  long int pno;
  char name[50];
  struct node *next;
} NODE;
NODE *insert(NODE *HEAD);
NODE *delete_node();
void display(NODE *HEAD);
void main()
{
   int ch;
   NODE *HEAD=NULL;
   while(1){
     printf("1.insertion \n 2.Deletion \n 3.Display \n 4.Exit \n");
     printf("Enter your choice:");
     scanf("%d",&ch);
     switch(ch)
     {
      case 1:HEAD=insert(HEAD);break;
      case 2:HEAD=delete_node(HEAD);break;
      case 3:display(HEAD);break;
      case 4:exit(0);break;
      default:printf("\nPlease enter choice between 1 to 4");break;
      }
     }
}

NODE *insert(NODE *HEAD)
{
    NODE *head,*temp,*nn;
    int cn;
    cn=0;
    nn=(NODE*)malloc(sizeof(NODE));
    printf("\nEnter Register Number of Player:");
    scanf("%d",&nn->rno);
    printf("\nEnter Name of player:");
    scanf("%s",&nn->name);
    printf("\nEnter Age of Player:");
    scanf("%d",&nn->age);
    printf("\nEnter Phone Number of Player:");
    scanf("%ld",&nn->pno);
    nn->next=NULL;
    head=HEAD;
    if(head==NULL)
    {
      head=nn;
    }
    else
    {
      temp=HEAD;
      while(temp->next!=NULL)
      {
    if(temp->age==nn->age)
    {
      cn=cn+1;
    }
    temp=temp->next;
      }
      if(temp->next==NULL && temp->age==nn->age)
      {
    cn++;
      }
      if(cn==5)
      {
       printf("Alrady Five Member of this group Registered so can not Accep This Record");
       return head;
      }
      temp->next=nn;
    }
    return head;
}
void display(NODE *HEAD)
{
  NODE *temp;
  temp=HEAD;
  while(temp!=NULL)
  { printf("--------------------------------");
    printf("Register Number=%d\n",temp->rno);
    printf("Name of Player=%s\n",temp->name);
    printf("Age of Player=%d\n",temp->age);
    printf("Phone Number=%ld\n",temp->pno);
    printf("--------------------------------");
    temp=temp->next;
  }
}
NODE *delete_node(NODE *HEAD)
{
   NODE *temp,*p,*n,*head;
   int rn;
   printf("\nEnter register number to delete record:");
   scanf("%d",&rn);
   head=temp=HEAD;
   if(head->rno==rn)
   {
    printf("\nRecord Deleted Succesfully.");
    return head->next;
   }
   else
   {
     while(temp->next->rno != rn)
     {
       temp=temp->next;
     }
     p=temp;
     temp=temp->next;
     n=temp->next;
     p->next=n;
     free(temp);

     printf("Record Deleted..");
     return head;
   }
}