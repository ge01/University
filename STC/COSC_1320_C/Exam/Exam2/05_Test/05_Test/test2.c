#include <stdio.h>
#include <stdlib.h>


//Write a program that uses a loop to display the number of calories burned after rock climbing in 10, 15, 20, 25, 30, 45, 50, 55, 60 minutes.
//A person, Rock Climbing for one hour, will burn 294 calories.
//int main(void)
//{
//	float minutes;
//	float caloriesBurned;
//
//	printf("MINUTES\t\tCALORIES\n");
//	printf("-----------------------\n");
//
//	for (minutes = 10; minutes <= 60; minutes += 5) {
//		
//		if (minutes == 35 || minutes == 40) {
//			continue;
//		}			
//		
//		caloriesBurned = minutes / 60 * 294;
//		printf("%.2f\t\t%.2f\n", minutes, caloriesBurned);
//	}
//}

//QUESTION 4
//
//Write a program that reads a series of pairs of numbers as follows :
//Exercise number
//Exercise hours for that exercise
//Your program should use a switch statement to help determine the calories burned for each Exercise.Your program should also calculate and display the total calories burned of all exercise did for that day.You do not know the number of exercises a person did in a day in advance.You can use a sentinel controlled loop to ask user enter an exercise number 1 to 5, press - 1 to end the input.
//1. Swimming for one hour will burn 590 calories.
//2. Walking for one hour will burn 100 calories.
//3. Running for one hour will burn 557 calories.
//4. Cycling for one hour will burn 398 calories.
//5. Dancing for one hour will burn 443 calories.
int main()
{
	int exerciseNumber = 0;
	double exerciseHours;
	double calories;
	double totalDailyCalories = 0;

	//prompt menu for position, use -1 as sentinel value for while loop
	puts("This program calculates total calories burned in a day.\n");
	puts("Enter position 1 to 4,type -1 to exit:\n"); 
	printf_s("1. Swimming for one hour will burn 590 calories.\n");
	printf_s("2. Walking for one hour will burn 100 calories.\n");
	printf_s("3. Running for one hour will burn 557 calories.\n");
	printf_s("4. Cycling for one hour will burn 398 calories.\n");
	printf_s("5. Dancing for one hour will burn 443 calories\n\n");
	scanf_s("%i", &exerciseNumber); 

	while (exerciseNumber != -1)
	{
		switch (exerciseNumber)
		{

		case 1:
	
			printf_s("Enter hours for swimming: ");
			scanf_s("%lf", &exerciseHours);

			calories = exerciseHours * 590;
			totalDailyCalories += calories;

			break;
	
		case 2:

			printf_s("Enter hours for walking: ");
			scanf_s("%lf", &exerciseHours);

			calories = exerciseHours * 100;
			totalDailyCalories += calories;

			break;

		case 3:
				
			printf_s("Enter hours for running: ");
			scanf_s("%lf", &exerciseHours);

			calories = exerciseHours * 557;
			totalDailyCalories += calories;

			break;
			
		case 4:
 
			printf_s("Enter hours for cycling: ");
			scanf_s("%lf", &exerciseHours);

			calories = exerciseHours * 398;
			totalDailyCalories += calories;

			break;

		case 5:

			printf_s("Enter hours for dancing: ");
			scanf_s("%lf", &exerciseHours);

			calories = exerciseHours * 443;
			totalDailyCalories += calories;

			break;

		default:

			puts("Invalid input!");
			break;

		}

		//prompt menu for position, use -1 as sentinel value for while loop
		printf_s("\nEnter position 1 to 4,type -1 to exit: ");
		scanf_s("%i", &exerciseNumber);
	} 

	//display result
	printf_s("The total daily calories is %.2lf\n\n", totalDailyCalories);

	return 0;
} 

//QUESTION 2
//
//Write a function called GramToPounds that will take a single integer value Gram as a parameter and will convert it to Pounds and return the value.Test out the function design in main by using a random generated number as input.
//1gram = 0.00220462 pounds
// function prototype
//float GramToPounds(int weight);
//
//int main(void)
//{
//	float grams;
//	float pounds;
//
//	srand(time(NULL));
//
//	grams = 1000 + (rand() % 5000);
//
//	printf("%.2f grams = %.2f pounds\n", grams, GramToPounds(grams));
//
//	return 0;
//}
//
//float GramToPounds(int weight)
//{
//	return weight * 0.00220462;
//}




//QUESTION 1
//
//Write a for loop to add up multiple of 3’s : 3 + 6 + 9 + … + 99
//int main(void)
//{
//	int sumNum = 0;
//	int count;
//
//	for (count = 3; count <= 100; count += 3) {
//		sumNum += count;
//		printf("%d ", count);
//	}
//
//	printf("\n\n");
//	printf("The sum of the displayed integers is ");
//	printf("%d.", sumNum);
//	printf("\n\n");
//
//	return 0;
//}