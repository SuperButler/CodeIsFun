/*
Calculator that can take multiple inputs and in the order that they where input it puts them together
Aswell it outputs the full sum and all the opperators aswell in the answer
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int num[99];		//user input numbers
	char opp[99];		//user operator
	int aga = 1;		//play again & operator chosen

	while (aga)
	{
		int x = 0;			//resets x
		bool sum = true;	//resets user input

		printf("----- Calculator -----\n");

		while (sum) //user input
		{
			printf("\nEnter Number: ");	//prompt user to enter a number
			scanf_s("%d", &num[x]);

			printf("Enter operator: "); //prompt user to enter a operator
			scanf_s(" %c", &opp[x], 1);

			if (opp[x] == '=') 
			{
				sum = false; //if the operator is = : the loop ends 
			}
			else
			{
				x++; //changes to new numberspace
			}
		}

		int ans = num[0]; //sets answer as first input number

		for (int i = 0; i < x; i++) //calculations
		{
			switch (opp[i])
			{
			case '+':	//user adds numbers
				ans += num[i + 1];
				break;
			case '-':	//user subtracts numbers
				ans -= num[i + 1];
				break;
			case '*':	//user multiplys numbers
				ans *= num[i + 1];
				break;
			case '/':	//user divides numbers
				if (num[i + 1] == 0)	//tells user you cant divide by 0
				{
					printf("\nDivide 0 Error...\n");
					ans = 0;
				}
				else
				{
					ans /= num[i + 1];
				}
				break;
			default:	//user input a non operator 
				printf("\n\nCalculation Error...\n");
			}
		}

		for (int j = 0; j <= x; j++) //outputs the calculation
		{
			printf("%d ", num[j]);
			printf("%c ", opp[j]);
		}
		printf("= %d", ans);	//outputs the answer

		printf("\n\nDo you have more calculations? (1 : yes / 0 : no): ");	//ask user if they want to play again
		scanf_s("%d", &aga);
		printf("\n");
	}
	return 0;
}