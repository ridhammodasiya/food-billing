#include<stdio.h>
main()
{
	int c;
	
	do
	{
		int a,item,total;
	printf("===========food biling============\n");
	printf("welcome to our menu\n");
	
	printf("1.pizza...........price 180rs/pc\n");
	printf("2.burger..........price 120rs/pc\n");
	printf("3.dosa............price 100rs/pc\n");
	printf("4.idli............price 50rs/pc\n");
	
	printf("enter your item:\n");
	scanf("%d",&item);
	
	switch(item)
	{
		case 1:printf("you have entered pizza\n");
		printf("enter pizza quantity:\n");
		scanf("%d",&item);
		total=180*item;
		printf("total amount is:%d\n",total);
		
		break;
		
		case 2:printf("you have enter burger\n");
		printf("enter burger quantity:\n");
		scanf("%d",&item);
		total=120*item;
		printf("total amount is:%d\n",total);
		break;
		
		case 3:printf("you have enter dosa\n");
		printf("enter dosa quantity:\n");
		scanf("%d",&item);
		total=100*item;
		printf("total amount is:%d\n",total);
		break;
		
		case 4:printf("you have enter idli\n");
		printf("enter idli quantity:\n");
		scanf("%d",&item);
		total=50*item;
		printf("total amount is:%d\n",total);
		break;
	}
	    printf("do you want any more:y or n\n");
	    c=getch();
	}
	while(c=='Y' || c=='y');
	
	
	
	
	
}
