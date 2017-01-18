#include<stdio.h>

void main()
{

	long long int temp,crd;
	int i=0,ls,sum=0,count=0;

	printf("Enter card no.\n");
	scanf("%lld",&crd);	
	

	while(crd<=0)
	{
		printf("Retry :\n");
		scanf("%lld",&crd);
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
	printf("%d\n",sum);

	if(sum%10==0)
	printf("\nvalid card nunmber\n");

	else
	printf("card no. not valid\n");

	temp=crd;
	while(temp>=100)
	{
		temp=temp/10;
		count++;
	}
	
	if(count==13)
	{

		switch(temp)
		{
			case 51:
			printf("American\n");
			break;
	
			case 37:
			printf("Amex\n");
			break;
	
			default:
			printf("Unknown card\n"); 
		}
	}
}
