#include<stdio.h>
int sum(int);
int main()
{
	int n;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	printf("%d is the sum of %d terms.",sum(n),n);
}
int sum(int n)
{
	if(n==0)
	return 0;
	return n+sum(n-1);
}