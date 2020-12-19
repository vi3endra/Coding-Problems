#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int info;
  struct node *next;

}snode;


snode *head=NULL,*temp;
void init();
void display();
void insertbeg();
void insertlast();
void insertmid();
void deletebeg();
void deletelast();
void deletemid();
void count();
void search();
int main()
{
    int c;
    init();
    while(1)
    {
        printf("1.Insert\n2.Delete\n3.Display\n4.Count Number of Nodes\n5.Search Element\n6.Exit\nEnter a Choice : ");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("1.Insert at Beginning\n2.Insert at Last\n3.Insert at Position\nEnter a Choice : ");
            scanf("%d",&c);
            switch(c)
            {
            case 1:
                insertbeg();
                break;
            case 2:
                insertlast();
                break;
            case 3:
                insertmid();
                break;
            default :
                printf("\nInvalid Choice\n");
            }
            break;
        case 2:
            printf("1.Delete at Beginning\n2.Delete at Last\n3.Delete an Element\nEnter a Choice : ");
            scanf("%d",&c);
            switch(c)
            {
            case 1:
                deletebeg();
                break;
            case 2:
                deletelast();
                break;
            case 3:
                deletemid();
                break;
            default :
                printf("\nInvalid Choice\n");
            }
            break;
        case 3:
            display();
            break;
        case 4:
            count();
            break;
        case 5:
            search();
            break;
        case 6:
            exit(0);
        default :
            printf("\nEnter a Valid Choice\n");
        }
    }
    return 0;
}

void init()
{
    int n;
    printf("\nEnter Number of Nodes to be Inserted : ");
    scanf("%d",&n);
    if(n>0)
    {
        int i,data;
        snode *newnode;
        for(i=0;i<n;i++)
        {
            newnode=(snode *)malloc(sizeof(snode));
            printf("\nEnter Data to be Inserted : ");
            scanf("%d",&data);
            newnode->info=data;
            newnode->next=NULL;
            if(head==NULL)
            {
                head=newnode;
                temp=head;
            }
            else
            {
                temp->next=newnode;
                temp=newnode;
            }
        }
    }
    printf("\n");
}



void insertmid()
{
 int e,pos,i;
 snode *newnode;
 printf("enter the element you want to insert and position");
 scanf("%d%d",&e,&pos);
 newnode=(snode*)malloc(sizeof(snode));
 newnode->info=e;
 newnode->next=NULL;
 
 temp=head;
 for(i=0;i<pos-1;i++)
 {
  temp=temp->next;
  
 }
 newnode->next=temp->next;
  temp->next=newnode;


}
void insertlast()
{
 int e;
 snode *newnode;
 printf("enter the element you want to insert");
 scanf("%d",&e);
 newnode=(snode*)malloc(sizeof(snode));
 newnode->info=e;
 newnode->next=NULL;
temp=head;
    while(temp->next!=NULL)
    { 
     temp = temp->next;
    }
     temp->next=newnode;
}
void deletebeg()
{
   if(head==NULL)
   {
    printf("underflow");
   }
   else{
   printf("the deleted element %d " ,head->info);
    temp=head;
    head=head->next;
    free(temp);
   } 
}
 void deletemid()
  {
   int num;
   snode *prev;
   printf("enter no to delete");
   scanf("%d",&num);
   for(temp=head; temp->info!=num ; temp=temp->next)
   {
    prev=temp;
    temp=temp->next;
   }
  printf("\nDeleted: %d\n",temp->info);
  prev->next=temp->next;
  free(temp);
   
  }
void deletelast()
{  
  snode *prev;
  if(head==NULL)
    {
        printf("\nUnderFlow\n");
    }
  else
  {
	temp=head;
  while(temp->next!=NULL)
   {
       prev=temp;
       temp=temp->next;   
  }
   printf("\nDeleted : %d\n",temp->info);
   prev->next=NULL;
   free(temp);
}
}
void display()
{
    if(head==NULL)
    {
        printf("\nUnderFlow\n");
    }
    else
    {
        printf("\nLinked List : ");
        for(temp=head;temp!=NULL;temp=temp->next)
            printf("%d ",temp->info);
        printf("\n");
    }
}
void count()
{
    int i=0;
    for(temp=head;temp!=NULL;temp=temp->next)
        i++;
    printf("\nLinked List Contains %d Nodes\n",i);
}
void search()
{
    int data,i=0,flag=0;
    printf("\nEnter Element to be Searched : ");
    scanf("%d",&data);
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        if(data==temp->info)
        {
            printf("Found %d at %d\n",data,i);
            flag=1;
        }
        i++;
    }
    if(flag==0)
    {
        printf("\nNot Found\n");
    }
}
void insertbeg()
{
    int data;
    snode *newnode;
    newnode=(snode *)malloc(sizeof(snode));
    printf("\nEnter Data to be Inserted : ");
    scanf("%d",&data);
    newnode->info=data;
    newnode->next=head;
    head=newnode;
    printf("\n");
}














