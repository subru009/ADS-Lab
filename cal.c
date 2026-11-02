#include <stdio.h>
#include <stdlib.h>
void main()
{
	int num1,num2,result;
	char op;
	printf("enter the two numbers:");
	scanf("%d%d",&num1,&num2);
	printf("enter the operator :");
	scanf(" %c",&op);
	switch(op)
	{
		case '+':
		result = num1+num2;
		break;
		
		case '-':
		result = num1-num2;
		break;
		
		case '*':
		result = num1*num2;
		break;
		
		case '/':
		if(num2!=0)
		{
		result = num1/num2;
		}
		else
		{
			printf("error");
		}
		break;
		defalut:
			printf("invalid operator");
			exit (0);
	}
	printf("result =%d",result);
	
}
