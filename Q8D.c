#include<stdio.h>
int main()
{
	int m[2][2];
	int t[2][2];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("For m,enter the element at [%d][%d]:",i,j);
			scanf("%d",&m[i][j]);	
		}
	}
	printf("Transpose Matrix=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			t[i][j]=m[j][i];
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}