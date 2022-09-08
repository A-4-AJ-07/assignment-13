#include<stdio.h>
int fibbo(int );
int main()
{
	int i,n;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	  printf("%d ",fibbo(i));
      }
}
int fibbo(int n)
{  
   	if(n==1||n==2)
   	return 1;
   	return  fibbo(n-1)+fibbo(n-2);
}