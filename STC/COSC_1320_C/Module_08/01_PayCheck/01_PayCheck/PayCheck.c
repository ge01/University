//
// October 21, 2017
// This program has a function called payCheck that accepts two double
// parameters (hours, rate). The function calculates the pay of an individual
// considering possible over time in a week, where over time is 2.0 times
// more than the normal "rate" (which is given as a parameter).  The function
// returns the pay amount as a return value (double).  The regular working
// hours in a week are 40 hours.
#include <stdio.h>
#include <math.h>

// function prototype
double payCheck(double hours, double rate); 

// function main begins program execution
int main(void)
{
	// declare variables
	double hoursWorked;
	double hourlyRate;
	double weeklyPay;

	// get the # of hours worked
	printf("%s", "Enter # of hours worked: ");
	scanf("%lf", &hoursWorked);

	// get the hourly rate
	printf("%s", "Enter hourly rate of the worker (00.00): ");
	scanf("%lf", &hourlyRate);

	// calculate salary and store in weeklyPay
	weeklyPay = payCheck(hoursWorked, hourlyRate);

	// print weekly pay
	printf("Salary is $%.2lf\n\n", weeklyPay);

}

// payCheck function definition returns calculated salary
double payCheck(double hours, double rate)
{
	// declare local variable
	double payAmount;

	// calculate salary
	if(hours <= 40) {
		// 40 hour work week
		payAmount = hours * rate;
	}
	else {
		// overtime
		payAmount = (hours - 40) * (rate * 2) + (rate * 40);
	}	

	return payAmount;
}