#include<stdio.h>

void ask();
float sum;
void main()
{
	float temp; int i,count=0;

	int a[6]={500,100,50,10,5,1};
	ask();
	
	
	if(sum<0)
	{
		printf("Please enter valid amount.\n");
		ask();
	}

	temp=sum;

	while(temp>=1)
	{
		if(temp>=a[i])
		{
			temp=temp-a[i];
			count++;		
		}
		else
		i++;
	}
	printf("The required no. of notes is : %d\n",count);

}

void ask()
{
	printf("Enter the amount in rupees :\n");

	scanf("%f",&sum);
}

