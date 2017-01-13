#include<stdio.h>

void main()
{

	int i,j,n;
	printf("Enter no. of steps:\n");
	scanf("%d",&n);
	
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<=n;j++)
		{
			if(j>=i)
			printf("#");
			else
			printf(" ");
		
		}
		
		printf("\n");
	}	
}
