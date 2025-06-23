#include<stdio.h>
#include<conio.h>
 void main()
{
	int i,num;
	clrscr();

	printf("\nENTER NUM : ");
	scanf("%d",&num);

	i=1;
	do
	{
		printf("\n%d * %d = %d",num,i , num * i);
		i++;
	}while(i<=10);

	getch();



}