#include<stdio.h>
void main()
{
	int num1,num2,num3;
	printf("enter the three numbers");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1>num2&&num1>num3)
		printf("%d is greater number",num1);
		else if(num2>num3)
		printf("%d is greater number",num2);
		else
		printf("%d is greater number",num3);
}
