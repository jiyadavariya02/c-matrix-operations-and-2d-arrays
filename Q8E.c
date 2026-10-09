#include<stdio.h>
int main()
{
	int m[3][3];
	int sum=0;
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("For m,enter the element at [%d][%d]:",i,j);
			scanf("%d",&m[i][j]);	
		}
	}
	for(i=0;i<3;i++)
	{
		sum=m[i][i]+sum;
	}
	printf("The sum of diagonal elements=%d",sum);
	return 0;
}