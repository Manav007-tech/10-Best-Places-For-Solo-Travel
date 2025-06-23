#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,odd_sum=0,even_sum=0;
	clrscr();
	do
	{
		if(i%2==0)
		{
			even_sum+=i;
		}
		else
		{
			odd_sum+=i;
		}
		i++;
	}
	while(i<=20);
	printf("\nSum of even numbers from 1-20: %d",even_sum);
	printf("\nSum of odd numbers from 1-20: %d",odd_sum);
	getch();

}