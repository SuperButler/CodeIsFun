/*
Simple calculator that takes 2 unputs from a user and + - * / them together
Then outputs the sum
*/

#include <stdio.h>

int main()
{
	int num[99], x = 0;	//user input numbers
	int ans = 0;		//anser from sum
	char opp = ' ';		//user operator

	for (int i = 5; i > 0; i--)
	{
		printf("----- Calculator -----\n");

		printf("\nEnter Number: ");	//prompt user to enter a number
		scanf_s("%d", &num[0]);

		printf("\nEnter operator: "); //prompt user to enter a operator
		scanf_s(" %c", &opp, 1);

		printf("\nEnter Number: ");	//prompt user to enter a number
		scanf_s("%d", &num[1]);

		switch (opp)
		{
		case '+':	//user adds numbers
			ans = num[0] + num[1];
			break;
		case '-':	//user subtracts numbers
			ans = num[0] - num[1];
			break;
		case '*':	//user multiplys numbers
			ans = num[0] * num[1];
			break;
		case '/':	//user divides numbers
			if (num[1] == 0)	//tells user you cant divide by 0
			{
				printf("\nDivide 0 Error...");
				ans = 0;
				break;
			}
			else
			{
				ans = num[0] / num[1]; 
				break;
			}
		default:	//user input a non operator 
			printf("\n\nCalculation Error...");
		}

		printf("\n\n%d %c %d = %d\n\n", num[0], opp, num[1], ans); //prints calculation
	}
	return 0;
}