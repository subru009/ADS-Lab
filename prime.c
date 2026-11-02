#include <stdio.h>
void main()
{
	int num1,flag=0,i;
	printf("enter the number:");
	scanf("%d",&num1);
	for(i=2;i<num1;i++)
	{
		if(num1%i==0)
		{
		flag=1;
		break;
		}
	}
		if(flag==1)
		{
		printf("the number is not prime");
		}
		else
		{
		printf("the number is prime");
		}
}
	
