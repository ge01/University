//
//
//
#include <stdio.h>

int main(void)
{
	float minutes;
	float caloriesBurned;

	printf("MINUTES\t\tCALORIES\n");
	printf("-----------------------\n");
	
	for (minutes = 15; minutes <= 100; minutes += 10) {
		caloriesBurned = minutes / 60 * 198;
		printf("%.2f\t\t%.2f\n", minutes, caloriesBurned);
		//printf("%.2f ", caloriesBurned);
	}
}