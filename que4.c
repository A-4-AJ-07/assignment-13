#include<stdio.h>
int sum(int);
int main()
{
	int n;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	printf("Sum of square of first n number is:%d",sum(n));
}
int sum(int n)
{
	if(n==1)
	return 1;
	return n*n+sum(n-1);
}