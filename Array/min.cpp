#include "min.h"

//define min function
int min(int A[]) {
	int min = A[0];
	for (int i = 0; i < 10; i++)
	{
		if (A[i] < min)
		{
			min = A[i];
		}
	}
	return min;
}

//define max funtion
int max(int A[]) {
	int max = A[0];
	for (int i = 0; i < 10; i++)
	{
		if (A[i] > max) {
			max = A[i];
		}
	}
	return max;
}
