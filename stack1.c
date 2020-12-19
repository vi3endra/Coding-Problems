#include<stdio.h>
#include<stdlib.h>
#define N 3
int a[N],top=-1;
void push();
void pop();
void traversal();

int main()
{
int c;
while(1){
printf("\n1. Push \n2. pop \n3.traversal \n4.exit");
printf("enter ur choices");
scanf("%d",&c);
switch(c){
case 1:
      push();
      break;
case 2:
       pop();
      break;
case 3: 
      traversal();
      break;
case 4:
       exit(0);
     
default:
       printf("enter correct choices");

   }
  }
 }
void push()
{
int e;
   if(top==N-1)
   {
       printf("overflow");
   }
   else
   {
    top++;
    printf("enter the element");
    scanf("%d",&e);
    a[top]=e;
    }  
}
 void pop()
{
    if(top==-1)
    {
     printf("undeflow");
     }
    else
      {
       printf("%d",a[top]);
       top--;
       }
}
  void traversal()
   {
    int i;
    if(top==-1)
    {
    printf("empty stack");
    }
    else
     {
     for(i=0;i<=top;i++)
      {
     printf("%d",a[i]);
      }

     }
    }












