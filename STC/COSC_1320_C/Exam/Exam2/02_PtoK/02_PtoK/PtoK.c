//
//
//
#include <stdio.h>

// function prototype
float PoundsToKilograms(float weight);

int main(void)
{
	float pounds;
	float kilograms;

	printf("%s", "This program converts pounds to kilograms.\n");
	printf("%s", "Enter pounds: ");
	scanf("%f", &pounds);
	puts("");

	//kilograms = pounds * 0.453592;
	//printf("%.2f pounds = %.2f kilograms\n", pounds, kilograms);

	printf("%.2f pounds = %.2f kilograms\n", pounds, PoundsToKilograms(pounds));
}

// PoundsToKilograms function definition returns  kilograms
float PoundsToKilograms(float weight)
{
	return weight * 0.453592;
}