#include<stdio.h>
int power(int ,int);
int main()
{
	int n,p;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("\nEnter the power:");
	scanf("%d",&p);
	power(n,p);
	printf("%d is the power of number",power(n,p));
}
int power(int a,int b)
{
	if(b==0)
	return 1;
	return a*power(a,b-1);
}
