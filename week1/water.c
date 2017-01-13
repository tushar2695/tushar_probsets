#include<stdio.h>

void main()
{
	int min,bot;
	printf("Enter minutes spent in the shower\n");
	scanf("%d",&min);
	//assuming capacity of bottle is 500ml and rate of water in the shower is 3l per min 
	bot=(min*3*1000)/500;
	printf("Bottles of water : %d\n",bot);
	

}
