#include<stdio.h>
int fact(int);
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("The factorial of given number is %d",fact(n));
}
int fact(int n)
{
	
	if(n==1)
	return 1;
	return n*fact(n-1);
}