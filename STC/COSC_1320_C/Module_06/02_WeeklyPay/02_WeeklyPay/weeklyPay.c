//
// October 7, 2017
// This program computes the weekly pay for employees.  Each type of 
// employee has its own pay code: Managers have paycode 1, hourly 
// workers have code 2, commission workers have code 3 and pieceworkers 
// have code 4. Use a switch to compute each employee’s pay based on 
// that employee’s paycode.
#include <stdio.h>

int main(void)
{
	// DECLARATION
	int employeeCode;          // to determine employee type
	int hoursWorked;           // hours worked and sentinel
	float hourlyRate;          // hourly rate
	float grossPay;            // gross pay
	float timeAndAHalfHours;   // total hours after 40 hours
	float timeAndAHalfRate;    // time and a half rate
	float weeklySales;         // weekly sales for commission workers
	float fixedAmount;         // for pieceworker cost per item
	int itemsProduced;         // for pieceworker number of items produced


	// HEADING
	puts("EMPLOYEE CODE\tEMPLOYEE DESCRIPTION");
	puts("------------------------------------");
	puts("      1\t\tManager");
	puts("      2\t\tHourly Worker");
	puts("      3\t\tCommission Worker");
	puts("      4\t\tPieceworker");
	
	// PROCESSING AND TERMINATION
	do { // loop until user enters employee code -1
		
		do {// enter employee code, loop if user doesn't use code 1-4
			printf("\nEnter a employee code to compute the weekly pay (-1 to end): ");
			scanf("%d", &employeeCode);

			// if employeee code is > 4 try again
			if (employeeCode > 4) {
				printf("\nEnter a number between 1 and 4:\n");
			}
		} while (employeeCode > 4);

		// determine which employee code was entered
		switch (employeeCode)
		{
		case 1: // MANAGERS message
			puts("\nManagers are paid a fixed weekly salary.");
			break;
		case 2: // HOURLY WORKER  calculation 		
				// get the # of hours worked
			printf("%s", "Enter # of hours worked: ");
			scanf("%d", &hoursWorked);

			// get the hourly rate
			printf("%s", "Enter hourly rate of the worker (00.00): ");
			scanf("%f", &hourlyRate);

			// calculate salary if <= 40 hours
			if (hoursWorked <= 40) {
				grossPay = hourlyRate * hoursWorked;
			}
			// calculate salary if > 40 hours
			else {
				timeAndAHalfHours = hoursWorked - 40;
				timeAndAHalfRate = (hourlyRate / 2) * timeAndAHalfHours;
				grossPay = (hourlyRate * hoursWorked) + timeAndAHalfRate;
			}

			// print salary
			printf("Salary is $%.2f\n", grossPay);
			break;
		case 3: // COMMISSION WORKER calculation
				// get weekly sales
			printf("%s", "Enter gross weekly sales (00.00): ");
			scanf("%f", &weeklySales);

			// calculate gross pay
			grossPay = 250 + (.057 * weeklySales);

			// print salary
			printf("Salary is $%.2f\n", grossPay);
			break;
		case 4: // PIECEWORKER calculation
				// get fixed amount
			printf("%s", "Enter fixed amount of money (00.00): ");
			scanf("%f", &fixedAmount);

			// get number of items produced
			printf("%s", "Enter number of items produced (integer): ");
			scanf("%d", &itemsProduced);

			// calculate gross pay
			grossPay = fixedAmount * itemsProduced;

			// print salary
			printf("Salary is $%.2f\n", grossPay);
			break;
		default:// selected if user enters a number > 4
			if (employeeCode != -1) {
				printf("%s", "Incorrect prodcut number entered.\n\n");
			}
			break;
		}
	} while (employeeCode != -1);	
}