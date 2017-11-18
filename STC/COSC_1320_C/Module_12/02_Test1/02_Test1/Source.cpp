#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Function prototypes
void getData(double *classNum, int &numScores);
double avgScore(double *classNum, int numScores);
void passOrFail(double *classNum, int numScores, int &pass, int &fail);

int main()
{
	//Declaring and initializing variables
	double 	*ptr = nullptr,
		average = 0.0;

	int scores = 0,
		numPass = 0,
		numFail = 0;

	//Getting the number of test scores to be inputed to determine amount of dynamically allocated memory
	do
	{
		if (scores < 0)
		{
			cout << "\nError: number of test scores must be a positive integer.\n\n";
		}

		cout << "How many Scores will be entered?\n";
		cout << "--------------------------------\n";
		cin >> scores;

	} while (scores < 0);

	//Dynamically allocate an int array for ptr with size of scores
	ptr = new double[scores];

	//Getting the test score data
	getData(ptr, scores);

	//Preventing division by 0 by not calling avgScore function if 0 is the number of scores
	if (scores == 0)
	{
		cout << "Done. ";
		system("pause");
		return 0;
	}

	//Calculating average
	average = avgScore(ptr, scores);

	//Displaying average test score	
	cout << "--------------------------------\n";
	cout << fixed << showpoint << setprecision(2);
	cout << "Average test score: " << average << endl;

	//Determining the passing and failing grades
	passOrFail(ptr, scores, numPass, numFail);

	//Displaying the number of passing scores
	cout << "Number of passing scores: " << numPass << endl;

	//Displaying the number of failing scores
	cout << "Number of failing scores: " << numFail << endl;

	//Releasing dynamically allocated memory
	delete[] ptr;
	ptr = nullptr;

	cout << "Done. ";
	system("pause");
	return 0;
}

//Function definitions
void getData(double *classNum, int &numScores)
{
	//Getting the scores for each test
	for (int count = 0; count < numScores; count++)
	{
		cout << "Enter score on test " << count + 1 << ": ";
		cin >> *(classNum + count);
		cout << endl;

		//Validating test score
		if (*(classNum + count) < 0 || *(classNum + count) > 100)
		{
			cout << "Error: please enter a test score between 0 and 100\n\n";
			count--;
		}
	}
}

double avgScore(double *classNum, int numScores)
{
	double accumulator = 0.0;

	//Calculate average test score
	for (int count = 0; count < numScores; count++)
	{
		accumulator += *(classNum + count);
	}

	return (accumulator / numScores);
}

void passOrFail(double *classNum, int numScores, int &pass, int &fail)
{
	for (int count = 0; count < numScores; count++)
	{
		//Passing if score is 60 or above
		if (*(classNum + count) >= 60)
		{
			pass++;
		}
		else
		{
			fail++;
		}
	}
}