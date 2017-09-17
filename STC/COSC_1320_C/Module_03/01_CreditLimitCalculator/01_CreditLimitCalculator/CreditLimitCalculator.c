//
// September 17, 2017
// This program determins if a department store has exceeded the
// credit limit on a charge account. For each customer, the following
// facts are available:
//		a. Account number
//		b. Balance at the beginning of the month
//		c. Total of all items charged by this customer this month
//		d. Total of all credits applied to this customer’s account this month
//		e. Allowed credit limit
#include <stdio.h>

// function main begins program execution
int main(void)
{
	// DECLARATION
	int accountNumber;				// a. Account number
	float beginningMonthBalance;	// b. Balance at the beginning of the month
	float totalMonthCharge;			// c. Total of all items charged by this customer this month
	float totalMonthCredit;			// d. Total of all credits applied to this customer’s account this month
	float allowedCreditLimit;		// e. Allowed credit limit
	float newBalance;				// Calcualted new balance
	
	// PROCESSING
	// get first account number from user
	printf("%s", "Enter account number (-1 to end): ");
	scanf("%d", &accountNumber);
	printf("\n");

	// Input each fact
	while (accountNumber != -1)
	{
		// get balance at the beginning of the month from user
		printf("%s", "Enter beginning balance: ");
		scanf("%f", &beginningMonthBalance);
		printf("\n");

		// get total of all items charged this month from user
		printf("%s", "Enter total charges: ");
		scanf("%f", &totalMonthCharge);
		printf("\n");

		// get total of all credits applied this month from user
		printf("%s", "Enter total credits: ");
		scanf("%f", &totalMonthCredit);
		printf("\n");

		// get allowed credit limit from user
		printf("%s", "Enter credit limit: ");
		scanf("%f", &allowedCreditLimit);
		printf("\n");

		// Calculate the new balance (= beginning balance + charges – credits)
		newBalance = beginningMonthBalance + totalMonthCharge - totalMonthCredit;

		// TERMINATION	
		// Determine whether the new balance exceeds the customer’s credit limit
		if (newBalance > allowedCreditLimit) {
			// Output account information and message
			printf("Account:\t%d\n\n", accountNumber);
			printf("Credit limit:\t%.2f\n\n", allowedCreditLimit);
			printf("Balance:\t%.2f\n\n", newBalance);
			printf("%s", "Credit Limit Exceeded");
		}

		// get account number from user
		printf("%s", "\n\n\n\nEnter account number (-1 to end): ");
		scanf("%d", &accountNumber);
		printf("\n");
	}	
}