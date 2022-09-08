#include<stdio.h>
int sum(int);
int main()
{
	int n;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	sum(n);
	printf(" is the reverse of number.");
}
int sum(int n)
{
	int a;
	if(n==0)
	return;
	if(n>0)
	{
		a=n%10;
		printf("%d",a);
		return sum(n/10);
	}
}