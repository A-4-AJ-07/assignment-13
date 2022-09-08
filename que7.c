#include<stdio.h>
int HCF(int ,int );
int main()
{
	int a,b,c;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		c=HCF(a,b);
		printf("%d is the HCF.",c);
	}
	if(b>a)
	{
		c=HCF(b,a);
		printf("%d is the HCF.",c);
	}
}
int HCF(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	HCF(b,a%b);
}