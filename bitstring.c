#include <stdio.h>
int main ()
{
	int A[5]={1,0,1,0,1};
	int B[5]={1,1,0,0,1};
	int i;
	
	printf("Set A:");
	for(i=0;i<5;i++)
	printf("%d",A[i]);
	
	printf("\nSet B:");
	for(i=0;i<5;i++)
	printf("%d",B[i]);
	
	printf("\nUnion:");
	for(i=0;i<5;i++)
	printf("%d",A[i]|B[i]);
	
	printf("\nIntersection:");
	for(i=0;i<5;i++)
	printf("%d",A[i]&B[i]);
	
	printf("\nDifference(A-B):");
	for(i=0;i<5;i++)
	printf("%d",A[i]&!B[i]);
	return 0;
}
