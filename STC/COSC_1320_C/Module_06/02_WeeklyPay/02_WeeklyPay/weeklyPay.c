#include <stdio.h>

int main(void)
{
	int employeeCode;
	int hoursWorked;           // hours worked and sentinel
	float hourlyRate;          // hourly rate
	float grossPay;            // gross pay
	float timeAndAHalfHours;   // total hours after 40 hours
	float timeAndAHalfRate;    // time and a half rate
	float weeklySales;
	float fixedAmount; 
	int itemsProduced;



	puts("EMPLOYEE CODE\tEMPLOYEE DESCRIPTION");
	puts("------------------------------------");
	puts("      1\t\tManager");
	puts("      2\t\tHourly Worker");
	puts("      3\t\tCommission Worker");
	puts("      4\t\tPieceworker");
	
	do {
		printf("\nEnter a code to compute the weekly pay ");
		scanf("%d", &employeeCode);		

		if (employeeCode > 4) {
			printf("\nEnter a number between 1 and 4:\n");
		}
	} while (employeeCode > 4);
	
	switch (employeeCode)
	{
	case 1:
		puts("\nManagers are paid a fixed weekly salary.");
		break;
	case 2:
		// get the # of hours worked
		printf("%s", "Enter # of hours worked: ");
		scanf("%d", &hoursWorked);

		// get the hourly rate
		printf("%s", "Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &hourlyRate);

		if (hoursWorked <= 40) {                   // calculate salary if <= 40 hours
			grossPay = hourlyRate * hoursWorked;
		}
		else {                                   // calculate salary if > 40 hours
			timeAndAHalfHours = hoursWorked - 40;
			timeAndAHalfRate = (hourlyRate / 2) * timeAndAHalfHours;
			grossPay = (hourlyRate * hoursWorked) + timeAndAHalfRate;
		}

		// print salary
		printf("Salary is $%.2f\n\n", grossPay);
		break;
	case 3:
		printf("%s", "Enter gross weekly sales ($00.00): ");
		scanf("%f", &weeklySales);

		grossPay = 250 + (.057 * weeklySales);

		// print salary
		printf("Salary is $%.2f\n\n", grossPay);
		break;
	case 4:
		printf("%s", "Enter fixed amount of money ($00.00): ");
		scanf("%f", &fixedAmount);
		printf("%s", "Enter number of items produced (integer): ");
		scanf("%d", &itemsProduced);

		grossPay = fixedAmount * itemsProduced;

		// print salary
		printf("Salary is $%.2f\n\n", grossPay);
		break;
	default:
		puts("default");
		break;
	}
	
}