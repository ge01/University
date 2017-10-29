/*Yinping Jiao
COSC1320: C Programming
Programming Assignment: Weekly Pay
use -1 as sentinel for while loop
Rough sketch for how to solve it
*/

#include<stdio.h>

int main()
{
	int posNum = 0;
	int hoursWorked, itemsMade;
	double managerWeeklySalary, hourlyWage, grossSales, itemPrice, totalWeekPay;

	//prompt menu for position, use -1 as sentinel value for while loop
	puts("This program calculates weekly pay for different type workers.\n");
	puts("Enter employee position 1 to 4,type -1 to exit:\n");   //line1
	printf_s("1.Manager\n2.Hourly Worker\n3.Commission Worker\n4.Pieceworker\n\n");  //line2
	scanf_s("%i", &posNum); //line3
	
	while (posNum != -1)
	{
		switch (posNum)
		{

		//manager case
		case 1:

			//prompt for and read the weekly salary for manager 
			printf_s("Enter salary for manager: ");
			scanf_s("%lf", &managerWeeklySalary);

			totalWeekPay = managerWeeklySalary;

		break;

		//hourly worker case
		case 2:
				
			//step 1: prompt and read hourly pay rate 
			printf_s("Enter hourly rate of the worker (00.00): ");
			scanf("%lf", &hourlyWage);

			//step 2: prompt and read hours worked
			printf_s("Enter hours worked: ");
			scanf_s("%i", &hoursWorked);

			//step 3: use if-else statement to calculate the total pay, considering over 40 hours or under
			if (hoursWorked <= 40) {
				// 40 hour work week
				totalWeekPay = hoursWorked * hourlyWage;
			}
			else {
				// overtime
				totalWeekPay = (hoursWorked - 40) * (hourlyWage * 1.5) + (hourlyWage * 40);
			}

		break;

		//commission worker case
		case 3:

			//step1: prompt and read the sales amount for the commission worker
			printf_s("Enter commission worker sales: ");
			scanf_s("%lf", &grossSales);

			//step2: calculate total weekly pay, using commission rate 0.057
			totalWeekPay = 250 + (.057 * grossSales);


		break;

		//piece worker case
		case 4:

			//step1: prompt and read the items made for the pieceworker
			printf_s("Enter number of items produced (integer): ");
			scanf_s("%i", &itemsMade);

			//step2: prompt and read the items price
			printf_s("Enter items price (00.00): ");
			scanf("%lf", &itemPrice);

			//step3: calculate total weekly pay
			totalWeekPay = itemsMade * itemPrice;
	
		break;

		//default case for error checking
		default:

			puts("Invalid input!\n");
			totalWeekPay = 0;
					
		}
		
		//display results as total weekly pay
		printf_s("The total weekly pay is %.2lf\n\n", totalWeekPay);

		/*display again of prompt menu for position, use -1 as sentinel value before go back to the top of while loop
		read posNum again before go back to the loop top
		same as line 1, line 2 and line 3
		*/
		puts("Enter employee position 1 to 4,type -1 to exit:\n");   //line1
		printf_s("1.Manager\n2.Hourly Worker\n3.Commission Worker\n4.Pieceworker\n\n");  //line2
		scanf_s("%i", &posNum); //line3

		}  //end while loop

	return 0;
} //end main
