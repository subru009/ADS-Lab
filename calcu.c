#include <stdio.h>
void main()
{
	int num1,num2,sum;
	printf("enter the first number:");
	scanf("%d",&num1);
	printf("enter the second number:");
	scanf("%d",&num2);
	sum=num1+num2;
	printf("add=%d\n",sum);
	sum=num1-num2;
	printf("sub=%d\n",sum);
	sum=num1*num2;
	printf("multi=%d\n",sum);
	sum=num1/num2;
	printf("div=%d\n",sum);
	
}
