#include<stdio.h>

void ask();
long long int crd;
void main()
{

	long long int temp;
	int i=0,ls,sum=0;
	ask();		

	if(crd<=0)
	{
	printf("Retry :\n");
	ask();
	}

	temp=crd;

	while((temp/10)>0)
	{
		ls=temp%10;
		temp=temp/10;
		
		
		if(i%2==0)
		{
			sum=sum+ls;
		}
			
		else
		{
			ls=ls*2;
			if(ls>=10)
			{
				ls=(ls/10)+(ls%10);
			}	
		
		sum=sum+ls;
		}
	i++;
	}
	
	sum=sum+temp;

	printf("\n%d\n",sum);

	if(sum%10==0)
	printf("\nvalid card nunmber\n");

	else
	printf("card no. not valid\n");

}

void ask()
{
	printf("Enter the card no. :\n");
	scanf("%lld",&crd);
}

