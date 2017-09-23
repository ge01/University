//
// September 24, 2017
// This proga determins the gross pay for each of several employees.
// The company pays “straight time” for the first 40 hours worked by 
// each employee and pays “time-and-a-half” for all hours worked in 
// excess of 40 hours. 
#include <stdio.h>

// function main begins program execution
int main(void)
{
	// DECLARATION
	int hoursWorked;           // hours worked and sentinel
	float hourlyRate;          // hourly rate
	float grossPay;            // gross pay
	float timeAndAHalfHours;   // total hours after 40 hours
	float timeAndAHalfRate;    // time and a half rate
	
	// PROCESSING
	// get the # of hours worked
	printf("%s", "Enter # of hours worked (-1 to end): ");
	scanf("%d", &hoursWorked);
	
	while (hoursWorked != -1)
	{
		// get the hourly rate
		printf("%s", "Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &hourlyRate);

		if (hoursWorked <= 40) {                   // calculate salary if <= 40 hours
			grossPay = hourlyRate * hoursWorked;
		} else {                                   // calculate salary if > 40 hours
			timeAndAHalfHours = hoursWorked - 40;
			timeAndAHalfRate = (hourlyRate / 2) * timeAndAHalfHours;
			grossPay = (hourlyRate * hoursWorked) + timeAndAHalfRate;
		}
		
		// print salary
		printf("Salary is $%.2f\n\n", grossPay);

		// get the # of hours worked
		printf("%s", "Enter # of hours worked (-1 to end): ");
		scanf("%d", &hoursWorked);	
	}

}