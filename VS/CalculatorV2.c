/*
Very buggie but most of what you need is in the code 
Good blueprint for a 3rd update 
*/



#include <stdio.h>
#include <stdbool.h>

int main()
{
	int num[99], x = 0;				//user input numbers
	int ans = 0, k = 0;				//anser from sum
	char opp[99];					//user operator
	bool aga = true, sum = true;	//play again & operator chosen

	do
	{
		k = 0;	//resets calculation numbers to 0

		for (int j = 0; j < 99; j++)
		{
			opp[j] = ' ';	//reset operator to emptyspace
			num[j] = ' ';	//reset user input to emptyspace;
		}

		printf("----- Calculator -----\n");

		do
		{
			printf("\nEnter Number: ");	//prompt user to enter a number
			scanf_s("%d", &num[x]);

			printf("\nEnter operator: "); //prompt user to enter a operator
			scanf_s(" %c", &opp[x], 1);

			if (opp[x] == '=') 
			{
				sum = false; //if the operator is = : the loop ends 
			}
			else
			{
				x += 1; //changes to new numberspace
			}
		} while (sum);

		ans = num[0];

		for (int i = 0; i < 99; i++)
		{
			//printf(ans);
			if (num[i + 1] == ' ')
			{
				i = 98; //lets the loop go 1 more time to finish calculation
			}
			else
			{
				switch (opp[k])
				{
				case '+':	//user adds numbers
					ans += num[k + 1];
					break;
				case '-':	//user subtracts numbers
					ans -= num[k + 1];
					break;
				case '*':	//user multiplys numbers
					ans *= num[k + 1];
					break;
				case '/':	//user divides numbers
					if (num[k + 1] == 0)	//tells user you cant divide by 0
					{
						printf("\nDivide 0 Error...");
						ans = 0;
						break;
					}
					else
					{
						ans /= num[k + 1];
						break;
					}
				default:	//user input a non operator 
					printf("\n\nCalculation Error...");
				}
				k++;
			}
			
			printf(ans);

			//printf("\n\n%d %c %d = %d\n\n", num[0], opp, num[1], ans); //prints calculation
		}


	} while (aga);

	return 0;
}