#include<stdio.h>
int main()
{
	int a,sum=0,n,i;
	printf("How much no you want to add : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Number : ");
		scanf("%d",&a);
		sum += a;
	}
	printf("sum = %d",sum);
}
