#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int arr[5][5], i, j;
	for (i = 0; i<5; i++) {
		for (j = 0; j<5; j++) {
			arr[i][j] = rand() % 100 + 1;
		}
	}
	printf("2D array row wise:\n");
	for (i = 0; i<5; i++) {
		for (j = 0; j<5; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("-------------------------------\n");
	printf("2D array column wise\n");
	for (i = 0; i<5; i++) {
		for (j = 0; j<5; j++) {
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	printf("-------------------------------\n");
	printf("minimum and maximum of 2D array\n");
	/******************maximum and minimum in 2D array****/
	int max = arr[0][0], min = arr[0][0];
	for (i = 0; i<5; i++) {
		for (j = 0; j<5; j++) {
			if (arr[i][j]>max) {
				max = arr[i][j];
			}
			if (arr[i][j]<min) {
				min = arr[i][j];
			}
		}

	}
	printf("max: %d min:%d\n", max, min);
	/**************bubble sort***********/
	/************convert 2D array to 1D array***/
	int reference[25], k = 0, l = 0;
	for (i = 0; i<5; i++) {
		for (j = 0; j<5; j++) {
			reference[k] = arr[i][j];
			k++;
		}
	}
	/****************bubble sort 1D array**********/

	for (i = 0; i<25; i++) {
		for (j = 0; j<24; j++) {
			if (reference[j]>reference[j + 1]) {
				int temp = reference[j];
				reference[j] = reference[j + 1];
				reference[j + 1] = temp;
			}
		}
	}
	/*****************copy sorted 1D array back into 2D array******/
	i = 0;
	k = 0;
	while (i<25) {
		for (j = 0; j<5; j++) {
			arr[k][j] = reference[l];
			l++;
		}
		k++;
		i = i + 5;
	}
	/****print sorted 2D array***/
	printf("--------------------------------------------------\n");
	printf("bubble sorted 2D array:\n");
	for (i = 0; i<5; i++) {
		for (j = 0; j<5; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}