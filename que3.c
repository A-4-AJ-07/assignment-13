#include<stdio.h>
int sum(int);
int main()
{
	int n;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	printf("Sum of first odd number is %d",sum(2*n));
}
int sum(int n)
{  
  if(n==2)
  return 2;  
  if(n>0)
  {
  	return n+sum(n-2);
  }
  
}