#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define N 5
int a[5],i=-1;

void insertbeg();
void insertmid();
void insertlast();
void deletebeg();
void deletemid();
void deletelast();
void displaybeg();
void displaylast();


int main()
{
	int c,ch;
	while(1){
		printf("\nEnter Your Choice\n1 for Insertion\n2 for Deletion\n3 for Display\n4 for Exit\n");scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("\nEnter a Choice\n1 to Insert at beginning \n2 to Insert in Middle\n3 to Insert at End\n");scanf("%d",&ch);
				switch(ch){
					case 1:
						insertbeg();
						break;
					case 2:
						insertmid();
						break;
					case 3:
						insertlast();
						break;
				}
				break;
				
			case 2:
				printf("Enter a Choice\n1 to Delete at Beginning \n2 to Delete an Element at Middle\n3 to Delete at End\n");scanf("%d",&ch);
				switch(ch){
					case 1:
						deletebeg();
						break;
					case 2:
						deletemid();
						break;
					case 3:
						deletelast();
						break;
				}
				break;
				
			case 3:
				printf("\nEnter a Choice\n1 to Display from Beginning\n2 to Display from Last\n");scanf("%d",&ch);
				switch(ch){
					case 1:
						displaybeg();
						break;
					case 2:
						displaylast();
						break;
				}
				break;
				
			case 4:
				exit(0);
				
			default :
				printf("\n Enter A Valid Choice:\n");
		}
	}
}



void insertbeg(){int n,j;
	if(i==N){
		printf("Overflow");
	}
		else{
		printf("\nEnter a number to be Inserted : ");
		scanf("%d",&n);
		for(j = i;j>=0;j--){
			a[j+1]=a[j];
		}
		a[0]=n;
		i++;
	}
}
void insertmid(){int n,p;
	if(i==N){
		printf("\nOverflow\n");
	}
	else{int j;
	printf("\nEnter a number to be Inserted : ");
	scanf("%d",&n);
	printf("\nEnter Position at which You want to Insert : ");
	scanf("%d",&p);
	p=p-1;
	for(j=p;j>=0;j--){
		a[j+1]=a[j];
	}
	a[p]=n;
	i++;
	}
}
void insertlast(){int n;
	printf("\nEnter element to be Inseted : ");
	scanf("%d",&n);
	i++;
	a[i]=n;
}

void deletebeg(){
	if(i==-1){
		printf("\nUnderflow\n");
	}
	else
	{
		int j;
		printf("\nDeleted %d\n",a[0]);
		for(j=0;j<=i;j++){
			a[j]=a[j+1];
		}
		i--;
	}
}
void deletemid(){
	if(i==-1){
		printf("\nUnderflow\n");
	}
	else
	{
		int e,j,p;
		printf("\nEnter Element to be Deleted\n");
		scanf("%d",&e);
		for(j=0;j<=i;j++){
			if(a[j]==e)
			{
				p=j;
				break;
			}
		}
		printf("\nDeleted %d\n",a[p]);
		for(j=p;j<=i;j++)
		{
			a[j]=a[j+1];
		}
		i--;
	}
}
void deletelast(){
	if(i==-1){
		printf("\nUnderflow\n");
	}
	else
	{
		printf("\nDeleted Element %d",a[i]);
		i--;
	}
}
void displaybeg(){int j;
	if(i==-1){
		printf("\nUnderflow\n");
	}
	else
	{
		for(j=0;j<=i;j++)
		{
			printf("\nElement at position %d : %d",j+1,a[j]);
		}
	}
}
void displaylast(){int j;
	if(i==-1){
		printf("\nUnderflow\n");
	}
	else
	{
		for(j=i;j>=0;j--)
		{
			printf("\nElement at position %d : %d",j+1,a[j]);
		}
	}
}
