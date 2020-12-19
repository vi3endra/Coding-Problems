// C program to check whether a given number is even or odd.

#include<stdio.h>
int main()
{
   int x;
   printf("Enter a Number : ");
   scanf("%d",&x);
   (x & 1)? printf("Odd"): printf("Even"); 
   return 0;
}
