#include <stdio.h>
void main()
{
	int num,rev=0,var;
	printf("enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		var=num%10;
		rev=rev*10+var;
		num=num/10;
	}
	printf("the reversed number is : %d\n",rev);
	int res=rev+10;
	printf("the reversed number + 10 : %d",res);
}			
	
