#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	float temp,sum; int i=0,count=0;
	char b[20];	
	printf("O hai! How much change is owed?\n");
	fgets(b,sizeof b,stdin);
    sum=atof(b);
	int a[4]={25,10,5,1};	

   	while(sum<=0)
	{
	    if(sum==0)
	    {
	        printf("Retry:");
	        fgets(b,sizeof b,stdin);
	        sum=atof(b);
	    }    
	    else
	    { 
		    printf("How much change is owed?\n");
		    scanf("%f",&sum);
		}    
	}

	sum=sum*100;
	temp=sum;
    i=0;
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
	return 0;
}
