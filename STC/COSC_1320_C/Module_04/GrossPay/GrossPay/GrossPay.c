#include <stdio.h>

// function main begins program execution
int main(void)
{
	// DECLARATION
	int sentinel;
	int hoursWorked;	// hours worked 
	float hourlyRate;	// hourly rate
	float grossPay;
	float timeAndAHalfHours;
	float timeAndAHalfRate;
	
	// PROCESSING
	// get the # of hours worked
	printf("%s", "Enter # of hours worked (-1 to end): ");
	scanf("%d", &hoursWorked);
	
	while (hoursWorked != -1)
	{
		
		printf("%s", "Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &hourlyRate);

		if (hoursWorked <= 40)
		{
			grossPay = hourlyRate * hoursWorked;
		}
		else
		{
			timeAndAHalfHours = hoursWorked - 40;
			timeAndAHalfRate = (hourlyRate / 2) * timeAndAHalfHours;
			grossPay = (hourlyRate * hoursWorked) + timeAndAHalfRate;
		}
		
		printf("Salary is $%.2f\n\n", grossPay);

		printf("%s", "Enter # of hours worked (-1 to end): ");
		scanf("%d", &hoursWorked);	
	}

}