#include<stdio.h>
int count(int );
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	count(n);
	printf("%d is the number of digits",count(n));
}
int count(int n)
{
  if(n==0)
  return 0;
  n=n/10;
  return 1+count(n);
}