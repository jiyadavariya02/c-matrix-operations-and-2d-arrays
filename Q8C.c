#include<stdio.h>
int main()
{
	int m1[2][2];
	int m2[2][2];
	int mul[2][2];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("For m1,enter the element at [%d][%d]:",i,j);
			scanf("%d",&m1[i][j]);
			printf("For m2,enter the element at [%d][%d]:",i,j);
			scanf("%d",&m2[i][j]);	
		}
	}
	printf("The multiplication of matrices=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			mul[i][j]=m1[i][j]*m2[i][j];
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}